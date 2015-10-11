#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

static const int GRID_SIZE = 3;

namespace Ui {
class MainWindow;
}


struct Player{
    QString name;
    int score;
    char piece;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_spot_00_clicked();
    void on_spot_01_clicked();
    void on_spot_02_clicked();
    void on_spot_10_clicked();
    void on_spot_11_clicked();
    void on_spot_12_clicked();
    void on_spot_20_clicked();
    void on_spot_21_clicked();
    void on_spot_22_clicked();

    void on_buttonRestart_clicked();

private:
    Ui::MainWindow *ui;
    Player player1;
    Player player2;
    char grid[GRID_SIZE][GRID_SIZE];
    bool gridWin[GRID_SIZE][GRID_SIZE];
    int playerTurn;
    int winningPlayer;

    void updateScore();
    void initializeGrid(char value);
    void updateBoard();
    void playerMove(int y, int x);
    void updateStatus();
    bool hasPlayerWon(Player player);
    bool isMoveAvailable();
    void initializeGridWin();
};



#endif // MAINWINDOW_H
