#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <string.h>
#include<iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bool ok;
    player1.name = QInputDialog::getText(this, tr("Player One"),
                                               tr("Enter your name:"),
                                                QLineEdit::Normal,
                                                "", &ok);
    if(player1.name.size()==0)
        player1.name = "Player1";

    player2.name = QInputDialog::getText(this, tr(" Player Two"),
                                               tr("Enter your name:"),
                                               QLineEdit::Normal,
                                                "", &ok);
    if(player2.name.size()==0)
        player2.name = "Player2";

    player1.score = 0;
    player2.score = 0;

    player1.piece = 'X';
    player2.piece = 'O';

    playerTurn = 1;

    winningPlayer = 0;


    initializeGrid(' ');
    updateScore();
    updateStatus();
    updateBoard();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateScore()
{
    ui->label_name1->setText(QString(player1.piece) + ": " + player1.name + " - " + QString::number(player1.score));
    ui->label_name2->setText(QString(player2.piece) + ": " + player2.name + " - " + QString::number(player2.score));
}

void MainWindow::initializeGrid(char value)
{
    for(int y = 0; y < GRID_SIZE; y++)
    {
        for (int x = 0; x < GRID_SIZE; x++)
        {
            grid[y][x] = value;
        }
    }
}

void MainWindow::initializeGridWin()
{
    for(int y = 0; y < GRID_SIZE; y++)
    {
        for (int x = 0; x < GRID_SIZE; x++)
        {
            gridWin[y][x] = false;
        }
    }
}

void MainWindow::updateBoard()
{
    ui->spot_00->setText(QString(grid[0][0]));
    ui->spot_01->setText(QString(grid[0][1]));
    ui->spot_02->setText(QString(grid[0][2]));
    ui->spot_10->setText(QString(grid[1][0]));
    ui->spot_11->setText(QString(grid[1][1]));
    ui->spot_12->setText(QString(grid[1][2]));
    ui->spot_20->setText(QString(grid[2][0]));
    ui->spot_21->setText(QString(grid[2][1]));
    ui->spot_22->setText(QString(grid[2][2]));

    if (gridWin[0][0] == true)
        ui->spot_00->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_00->setStyleSheet("");
    if (gridWin[0][1] == true)
        ui->spot_01->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_01->setStyleSheet("");
    if (gridWin[0][2] == true)
        ui->spot_02->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_02->setStyleSheet("");
    if (gridWin[1][0] == true)
        ui->spot_10->setStyleSheet("background-color: #6edda4");
    else
         ui->spot_10->setStyleSheet("");
    if (gridWin[1][1] == true)
        ui->spot_11->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_11->setStyleSheet("");
    if (gridWin[1][2] == true)
        ui->spot_12->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_12->setStyleSheet("");
    if (gridWin[2][0] == true)
        ui->spot_20->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_20->setStyleSheet("");
    if (gridWin[2][1] == true)
        ui->spot_21->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_21->setStyleSheet("");
    if (gridWin[2][2] == true)
        ui->spot_22->setStyleSheet("background-color: #6edda4");
    else
        ui->spot_22->setStyleSheet("");
}

void MainWindow::playerMove(int y, int x)
{
    if (grid[y][x] != ' ' || winningPlayer)
        return;
    if (playerTurn == 1)
    {
        grid[y][x] = player1.piece;
        playerTurn = 2;
        updateStatus();
        updateBoard();
    }
    else
    {
        grid[y][x] = player2.piece;
        playerTurn = 1;
        updateStatus();
        updateBoard();
    }

}

void MainWindow::updateStatus()
{
    if (hasPlayerWon(player1))
    {
        ui->label_status->setText(player1.name + " won!");
        winningPlayer = 1;
        player1.score++;
        updateScore();
        return;
    }
    if (hasPlayerWon(player2))
    {
        ui->label_status->setText(player2.name + " won!");
        winningPlayer = 2;
        player2.score++;
        updateScore();
        return;
    }

    if (!isMoveAvailable())
    {
        ui->label_status->setText("Tie Game");
        return;
    }

    if (playerTurn == 1)
        ui->label_status->setText(player1.name + "'s turn");
    else
        ui->label_status->setText(player2.name + "'s turn");
}

bool MainWindow::isMoveAvailable()
{
    for (int y = 0; y < GRID_SIZE; y++)
    {
        for (int x = 0; x < GRID_SIZE; x++)
        {
            if (grid[y][x] == ' ')
                return true;
        }
    }
    return false;
}

bool MainWindow::hasPlayerWon(Player player)
{
    initializeGridWin();
    for (int y = 0; y < GRID_SIZE; y++)
    {
        int count = 0;
        for (int x = 0; x < GRID_SIZE; x++)
        {
            if (grid[y][x] == player.piece)
            {
                count++;
                gridWin[y][x] = true;
            }
        }
        if (count == GRID_SIZE)
            return true;
        else
            initializeGridWin();
    }

    for (int x = 0; x < GRID_SIZE; x++)
    {
        int count = 0;
        for (int y = 0; y < GRID_SIZE; y++)
        {
            if (grid[y][x] == player.piece)
            {
                count++;
                gridWin[y][x] = true;
            }
        }
        if (count == GRID_SIZE)
            return true;
        else
            initializeGridWin();
    }

    if(grid[0][0] == player.piece && grid[1][1] == player.piece && grid[2][2] == player.piece)
    {
        gridWin[0][0] = true;
        gridWin[1][1] = true;
        gridWin[2][2] = true;
        return true;
    }
    if (grid[0][2] == player.piece && grid[1][1] == player.piece && grid[2][0] == player.piece)
    {
        gridWin[0][2] = true;
        gridWin[1][1] = true;
        gridWin[2][0] = true;
        return true;
    }

    return false;
}

void MainWindow::on_buttonRestart_clicked()
{
    winningPlayer = 0;
    playerTurn = 1;
    initializeGrid(' ');
    initializeGridWin();
    updateBoard();
    updateStatus();

}

void MainWindow::on_spot_00_clicked()
{
    playerMove(0, 0);
}

void MainWindow::on_spot_01_clicked()
{
    playerMove(0, 1);
}

void MainWindow::on_spot_02_clicked()
{
    playerMove(0, 2);
}

void MainWindow::on_spot_10_clicked()
{
    playerMove(1, 0);
}

void MainWindow::on_spot_11_clicked()
{
    playerMove(1, 1);
}

void MainWindow::on_spot_12_clicked()
{
    playerMove(1, 2);
}

void MainWindow::on_spot_20_clicked()
{
    playerMove(2, 0);
}

void MainWindow::on_spot_21_clicked()
{
    playerMove(2, 1);
}

void MainWindow::on_spot_22_clicked()
{
    playerMove(2, 2);
}
