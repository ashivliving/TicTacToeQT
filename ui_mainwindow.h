/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *spot_01;
    QPushButton *spot_02;
    QPushButton *spot_10;
    QPushButton *spot_11;
    QPushButton *spot_12;
    QPushButton *spot_20;
    QPushButton *spot_21;
    QPushButton *spot_22;
    QLabel *label_status;
    QPushButton *spot_00;
    QFrame *NameFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name1;
    QLabel *label_name2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRestart;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(350, 500);
        MainWindow->setMinimumSize(QSize(350, 500));
        MainWindow->setMaximumSize(QSize(350, 500));
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spot_01 = new QPushButton(centralWidget);
        spot_01->setObjectName(QStringLiteral("spot_01"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spot_01->sizePolicy().hasHeightForWidth());
        spot_01->setSizePolicy(sizePolicy);
        spot_01->setMinimumSize(QSize(0, 55));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(48);
        spot_01->setFont(font);
        spot_01->setCursor(QCursor(Qt::PointingHandCursor));
        spot_01->setFlat(false);

        gridLayout->addWidget(spot_01, 1, 1, 1, 1);

        spot_02 = new QPushButton(centralWidget);
        spot_02->setObjectName(QStringLiteral("spot_02"));
        sizePolicy.setHeightForWidth(spot_02->sizePolicy().hasHeightForWidth());
        spot_02->setSizePolicy(sizePolicy);
        spot_02->setMinimumSize(QSize(0, 55));
        spot_02->setFont(font);
        spot_02->setCursor(QCursor(Qt::PointingHandCursor));
        spot_02->setFlat(false);

        gridLayout->addWidget(spot_02, 1, 2, 1, 1);

        spot_10 = new QPushButton(centralWidget);
        spot_10->setObjectName(QStringLiteral("spot_10"));
        sizePolicy.setHeightForWidth(spot_10->sizePolicy().hasHeightForWidth());
        spot_10->setSizePolicy(sizePolicy);
        spot_10->setMinimumSize(QSize(0, 55));
        spot_10->setFont(font);
        spot_10->setCursor(QCursor(Qt::PointingHandCursor));
        spot_10->setFlat(false);

        gridLayout->addWidget(spot_10, 3, 0, 1, 1);

        spot_11 = new QPushButton(centralWidget);
        spot_11->setObjectName(QStringLiteral("spot_11"));
        sizePolicy.setHeightForWidth(spot_11->sizePolicy().hasHeightForWidth());
        spot_11->setSizePolicy(sizePolicy);
        spot_11->setMinimumSize(QSize(0, 55));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setPointSize(36);
        font1.setItalic(true);
        font1.setStrikeOut(false);
        spot_11->setFont(font1);
        spot_11->setCursor(QCursor(Qt::PointingHandCursor));
        spot_11->setFlat(false);

        gridLayout->addWidget(spot_11, 3, 1, 1, 1);

        spot_12 = new QPushButton(centralWidget);
        spot_12->setObjectName(QStringLiteral("spot_12"));
        sizePolicy.setHeightForWidth(spot_12->sizePolicy().hasHeightForWidth());
        spot_12->setSizePolicy(sizePolicy);
        spot_12->setMinimumSize(QSize(0, 55));
        spot_12->setFont(font);
        spot_12->setCursor(QCursor(Qt::PointingHandCursor));
        spot_12->setFlat(false);

        gridLayout->addWidget(spot_12, 3, 2, 1, 1);

        spot_20 = new QPushButton(centralWidget);
        spot_20->setObjectName(QStringLiteral("spot_20"));
        sizePolicy.setHeightForWidth(spot_20->sizePolicy().hasHeightForWidth());
        spot_20->setSizePolicy(sizePolicy);
        spot_20->setMinimumSize(QSize(0, 55));
        spot_20->setFont(font);
        spot_20->setCursor(QCursor(Qt::PointingHandCursor));
        spot_20->setFlat(false);

        gridLayout->addWidget(spot_20, 4, 0, 1, 1);

        spot_21 = new QPushButton(centralWidget);
        spot_21->setObjectName(QStringLiteral("spot_21"));
        sizePolicy.setHeightForWidth(spot_21->sizePolicy().hasHeightForWidth());
        spot_21->setSizePolicy(sizePolicy);
        spot_21->setMinimumSize(QSize(0, 55));
        spot_21->setFont(font);
        spot_21->setCursor(QCursor(Qt::PointingHandCursor));
        spot_21->setFlat(false);

        gridLayout->addWidget(spot_21, 4, 1, 1, 1);

        spot_22 = new QPushButton(centralWidget);
        spot_22->setObjectName(QStringLiteral("spot_22"));
        sizePolicy.setHeightForWidth(spot_22->sizePolicy().hasHeightForWidth());
        spot_22->setSizePolicy(sizePolicy);
        spot_22->setMinimumSize(QSize(0, 55));
        spot_22->setFont(font);
        spot_22->setCursor(QCursor(Qt::PointingHandCursor));
        spot_22->setFlat(false);

        gridLayout->addWidget(spot_22, 4, 2, 1, 1);

        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy1);
        label_status->setMinimumSize(QSize(327, 0));
        label_status->setMaximumSize(QSize(327, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("URW Chancery L"));
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_status->setFont(font2);
        label_status->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_status, 0, 0, 1, 3);

        spot_00 = new QPushButton(centralWidget);
        spot_00->setObjectName(QStringLiteral("spot_00"));
        sizePolicy.setHeightForWidth(spot_00->sizePolicy().hasHeightForWidth());
        spot_00->setSizePolicy(sizePolicy);
        spot_00->setMinimumSize(QSize(0, 55));
        spot_00->setFont(font);
        spot_00->setCursor(QCursor(Qt::PointingHandCursor));
        spot_00->setFlat(false);

        gridLayout->addWidget(spot_00, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        NameFrame = new QFrame(centralWidget);
        NameFrame->setObjectName(QStringLiteral("NameFrame"));
        sizePolicy1.setHeightForWidth(NameFrame->sizePolicy().hasHeightForWidth());
        NameFrame->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(NameFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_name1 = new QLabel(NameFrame);
        label_name1->setObjectName(QStringLiteral("label_name1"));
        sizePolicy1.setHeightForWidth(label_name1->sizePolicy().hasHeightForWidth());
        label_name1->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(10);
        label_name1->setFont(font3);

        horizontalLayout->addWidget(label_name1);

        label_name2 = new QLabel(NameFrame);
        label_name2->setObjectName(QStringLiteral("label_name2"));
        sizePolicy1.setHeightForWidth(label_name2->sizePolicy().hasHeightForWidth());
        label_name2->setSizePolicy(sizePolicy1);
        label_name2->setFont(font3);
        label_name2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_name2);


        verticalLayout->addWidget(NameFrame);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonRestart = new QPushButton(frame);
        buttonRestart->setObjectName(QStringLiteral("buttonRestart"));

        horizontalLayout_2->addWidget(buttonRestart);

        horizontalSpacer_2 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tic Tac Toe - Ashiv sGupta", 0));
        spot_01->setText(QApplication::translate("MainWindow", "X", 0));
        spot_02->setText(QApplication::translate("MainWindow", "X", 0));
        spot_10->setText(QApplication::translate("MainWindow", "X", 0));
        spot_11->setText(QApplication::translate("MainWindow", "X", 0));
        spot_12->setText(QApplication::translate("MainWindow", "X", 0));
        spot_20->setText(QApplication::translate("MainWindow", "X", 0));
        spot_21->setText(QApplication::translate("MainWindow", "X", 0));
        spot_22->setText(QApplication::translate("MainWindow", "X", 0));
        label_status->setText(QApplication::translate("MainWindow", "Status", 0));
        spot_00->setText(QApplication::translate("MainWindow", "X", 0));
        label_name1->setText(QApplication::translate("MainWindow", "X: Name - Score", 0));
        label_name2->setText(QApplication::translate("MainWindow", "O: Name - Score", 0));
        buttonRestart->setText(QApplication::translate("MainWindow", "Restart Game", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
