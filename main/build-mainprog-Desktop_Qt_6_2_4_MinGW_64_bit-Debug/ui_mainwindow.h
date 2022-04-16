/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUpdate;
    QAction *actionAbout_this_application;
    QAction *actionAbout_Qt;
    QAction *actionUpdate_2;
    QAction *actionChangelog;
    QWidget *centralwidget;
    QGraphicsView *character_showcase_7;
    QLabel *character_showcase_constellation_3;
    QLabel *uid;
    QLabel *character_showcase_constellation_6;
    QLabel *label_3;
    QGraphicsView *graphicsView_2;
    QLabel *character_showcase_constellation_4;
    QGraphicsView *character_showcase_1;
    QGraphicsView *character_showcase_2;
    QLabel *character_showcase_constellation_8;
    QGraphicsView *character_showcase_8;
    QLabel *sign;
    QGraphicsView *character_showcase_6;
    QGraphicsView *graphicsView;
    QGraphicsView *character_showcase_3;
    QGraphicsView *character_showcase_4;
    QLabel *character_showcase_constellation_10;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *character_showcase_constellation_5;
    QLabel *character_showcase_constellation_2;
    QGraphicsView *character_showcase_5;
    QLabel *character_showcase_constellation_7;
    QLabel *character_showcase_constellation_1;
    QGraphicsView *character_showcase_10;
    QLabel *character_showcase_constellation_9;
    QLabel *username;
    QGraphicsView *user_avatar;
    QGraphicsView *character_showcase_9;
    QMenuBar *menubar;
    QMenu *menuApplication;
    QMenu *menuSettings;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 671);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QString::fromUtf8("actionUpdate"));
        actionAbout_this_application = new QAction(MainWindow);
        actionAbout_this_application->setObjectName(QString::fromUtf8("actionAbout_this_application"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionUpdate_2 = new QAction(MainWindow);
        actionUpdate_2->setObjectName(QString::fromUtf8("actionUpdate_2"));
        actionChangelog = new QAction(MainWindow);
        actionChangelog->setObjectName(QString::fromUtf8("actionChangelog"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        character_showcase_7 = new QGraphicsView(centralwidget);
        character_showcase_7->setObjectName(QString::fromUtf8("character_showcase_7"));
        character_showcase_7->setGeometry(QRect(260, 480, 121, 111));
        character_showcase_7->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_constellation_3 = new QLabel(centralwidget);
        character_showcase_constellation_3->setObjectName(QString::fromUtf8("character_showcase_constellation_3"));
        character_showcase_constellation_3->setGeometry(QRect(400, 460, 121, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223")});
        character_showcase_constellation_3->setFont(font);
        character_showcase_constellation_3->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_3->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_3->setAlignment(Qt::AlignCenter);
        uid = new QLabel(centralwidget);
        uid->setObjectName(QString::fromUtf8("uid"));
        uid->setGeometry(QRect(200, 90, 311, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223")});
        font1.setPointSize(12);
        font1.setBold(false);
        uid->setFont(font1);
        uid->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        character_showcase_constellation_6 = new QLabel(centralwidget);
        character_showcase_constellation_6->setObjectName(QString::fromUtf8("character_showcase_constellation_6"));
        character_showcase_constellation_6->setGeometry(QRect(120, 580, 121, 20));
        character_showcase_constellation_6->setFont(font);
        character_showcase_constellation_6->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_6->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_6->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 300, 761, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223")});
        font2.setPointSize(12);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(0, 210, 951, 451));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/avatar_preview_card.png);"));
        character_showcase_constellation_4 = new QLabel(centralwidget);
        character_showcase_constellation_4->setObjectName(QString::fromUtf8("character_showcase_constellation_4"));
        character_showcase_constellation_4->setGeometry(QRect(540, 460, 121, 20));
        character_showcase_constellation_4->setFont(font);
        character_showcase_constellation_4->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_4->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_4->setAlignment(Qt::AlignCenter);
        character_showcase_1 = new QGraphicsView(centralwidget);
        character_showcase_1->setObjectName(QString::fromUtf8("character_showcase_1"));
        character_showcase_1->setGeometry(QRect(120, 360, 121, 111));
        character_showcase_1->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_2 = new QGraphicsView(centralwidget);
        character_showcase_2->setObjectName(QString::fromUtf8("character_showcase_2"));
        character_showcase_2->setGeometry(QRect(260, 360, 121, 111));
        character_showcase_2->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_constellation_8 = new QLabel(centralwidget);
        character_showcase_constellation_8->setObjectName(QString::fromUtf8("character_showcase_constellation_8"));
        character_showcase_constellation_8->setGeometry(QRect(400, 580, 121, 20));
        character_showcase_constellation_8->setFont(font);
        character_showcase_constellation_8->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_8->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_8->setAlignment(Qt::AlignCenter);
        character_showcase_8 = new QGraphicsView(centralwidget);
        character_showcase_8->setObjectName(QString::fromUtf8("character_showcase_8"));
        character_showcase_8->setGeometry(QRect(400, 480, 121, 111));
        character_showcase_8->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        sign = new QLabel(centralwidget);
        sign->setObjectName(QString::fromUtf8("sign"));
        sign->setGeometry(QRect(200, 120, 691, 41));
        sign->setFont(font2);
        sign->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        sign->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        sign->setWordWrap(true);
        character_showcase_6 = new QGraphicsView(centralwidget);
        character_showcase_6->setObjectName(QString::fromUtf8("character_showcase_6"));
        character_showcase_6->setGeometry(QRect(120, 480, 121, 111));
        character_showcase_6->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 10, 941, 192));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/avatar_preview_card.png);"));
        character_showcase_3 = new QGraphicsView(centralwidget);
        character_showcase_3->setObjectName(QString::fromUtf8("character_showcase_3"));
        character_showcase_3->setGeometry(QRect(400, 360, 121, 111));
        character_showcase_3->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_4 = new QGraphicsView(centralwidget);
        character_showcase_4->setObjectName(QString::fromUtf8("character_showcase_4"));
        character_showcase_4->setGeometry(QRect(540, 360, 121, 111));
        character_showcase_4->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_constellation_10 = new QLabel(centralwidget);
        character_showcase_constellation_10->setObjectName(QString::fromUtf8("character_showcase_constellation_10"));
        character_showcase_constellation_10->setGeometry(QRect(680, 580, 121, 20));
        character_showcase_constellation_10->setFont(font);
        character_showcase_constellation_10->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_10->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_10->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 260, 751, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223")});
        font3.setPointSize(20);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 330, 841, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        character_showcase_constellation_5 = new QLabel(centralwidget);
        character_showcase_constellation_5->setObjectName(QString::fromUtf8("character_showcase_constellation_5"));
        character_showcase_constellation_5->setGeometry(QRect(680, 460, 121, 20));
        character_showcase_constellation_5->setFont(font);
        character_showcase_constellation_5->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_5->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_5->setAlignment(Qt::AlignCenter);
        character_showcase_constellation_2 = new QLabel(centralwidget);
        character_showcase_constellation_2->setObjectName(QString::fromUtf8("character_showcase_constellation_2"));
        character_showcase_constellation_2->setGeometry(QRect(260, 460, 121, 20));
        character_showcase_constellation_2->setFont(font);
        character_showcase_constellation_2->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_2->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_2->setAlignment(Qt::AlignCenter);
        character_showcase_5 = new QGraphicsView(centralwidget);
        character_showcase_5->setObjectName(QString::fromUtf8("character_showcase_5"));
        character_showcase_5->setGeometry(QRect(680, 360, 121, 111));
        character_showcase_5->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_constellation_7 = new QLabel(centralwidget);
        character_showcase_constellation_7->setObjectName(QString::fromUtf8("character_showcase_constellation_7"));
        character_showcase_constellation_7->setGeometry(QRect(260, 580, 121, 20));
        character_showcase_constellation_7->setFont(font);
        character_showcase_constellation_7->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_7->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_7->setAlignment(Qt::AlignCenter);
        character_showcase_constellation_1 = new QLabel(centralwidget);
        character_showcase_constellation_1->setObjectName(QString::fromUtf8("character_showcase_constellation_1"));
        character_showcase_constellation_1->setGeometry(QRect(120, 460, 121, 20));
        character_showcase_constellation_1->setFont(font);
        character_showcase_constellation_1->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_1->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_1->setAlignment(Qt::AlignCenter);
        character_showcase_10 = new QGraphicsView(centralwidget);
        character_showcase_10->setObjectName(QString::fromUtf8("character_showcase_10"));
        character_showcase_10->setGeometry(QRect(680, 480, 121, 111));
        character_showcase_10->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        character_showcase_constellation_9 = new QLabel(centralwidget);
        character_showcase_constellation_9->setObjectName(QString::fromUtf8("character_showcase_constellation_9"));
        character_showcase_constellation_9->setGeometry(QRect(540, 580, 121, 20));
        character_showcase_constellation_9->setFont(font);
        character_showcase_constellation_9->setCursor(QCursor(Qt::IBeamCursor));
        character_showcase_constellation_9->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(33, 150, 243);"));
        character_showcase_constellation_9->setAlignment(Qt::AlignCenter);
        username = new QLabel(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(200, 50, 611, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223")});
        font4.setPointSize(18);
        font4.setBold(true);
        username->setFont(font4);
        username->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        user_avatar = new QGraphicsView(centralwidget);
        user_avatar->setObjectName(QString::fromUtf8("user_avatar"));
        user_avatar->setGeometry(QRect(40, 40, 141, 131));
        user_avatar->setStyleSheet(QString::fromUtf8("border-image: url(:/avatar/resources/rounded/unknown_256px.png);"));
        character_showcase_9 = new QGraphicsView(centralwidget);
        character_showcase_9->setObjectName(QString::fromUtf8("character_showcase_9"));
        character_showcase_9->setGeometry(QRect(540, 480, 121, 111));
        character_showcase_9->setStyleSheet(QString::fromUtf8("border-image: url(:/avatars/resources/Rectangle/unknown_placeholder_256px.png);"));
        MainWindow->setCentralWidget(centralwidget);
        graphicsView_2->raise();
        graphicsView->raise();
        character_showcase_7->raise();
        uid->raise();
        label_3->raise();
        character_showcase_1->raise();
        character_showcase_2->raise();
        character_showcase_8->raise();
        sign->raise();
        character_showcase_6->raise();
        character_showcase_3->raise();
        character_showcase_4->raise();
        label_2->raise();
        label_4->raise();
        character_showcase_constellation_2->raise();
        character_showcase_5->raise();
        character_showcase_constellation_7->raise();
        character_showcase_constellation_1->raise();
        character_showcase_10->raise();
        username->raise();
        user_avatar->raise();
        character_showcase_9->raise();
        character_showcase_constellation_6->raise();
        character_showcase_constellation_3->raise();
        character_showcase_constellation_4->raise();
        character_showcase_constellation_5->raise();
        character_showcase_constellation_10->raise();
        character_showcase_constellation_9->raise();
        character_showcase_constellation_8->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 26));
        menuApplication = new QMenu(menubar);
        menuApplication->setObjectName(QString::fromUtf8("menuApplication"));
        menuSettings = new QMenu(menuApplication);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuApplication->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuApplication->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionUpdate);
        menuAbout->addAction(actionAbout_this_application);
        menuAbout->addAction(actionAbout_Qt);
        menuAbout->addSeparator();
        menuAbout->addAction(actionUpdate_2);
        menuAbout->addAction(actionChangelog);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        actionAbout_this_application->setText(QCoreApplication::translate("MainWindow", "About this application", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionUpdate_2->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        actionChangelog->setText(QCoreApplication::translate("MainWindow", "Changelog", nullptr));
        character_showcase_constellation_3->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        uid->setText(QCoreApplication::translate("MainWindow", "Unknown UID", nullptr));
        character_showcase_constellation_6->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "This section allow to show your characters, maxium number of character is 10.", nullptr));
        character_showcase_constellation_4->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        character_showcase_constellation_8->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        sign->setText(QCoreApplication::translate("MainWindow", "No signature", nullptr));
        character_showcase_constellation_10->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Character Showcase", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "To view your wish record or edit this, please go to the Application Tab and choose settings.", nullptr));
        character_showcase_constellation_5->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        character_showcase_constellation_2->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        character_showcase_constellation_7->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        character_showcase_constellation_1->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        character_showcase_constellation_9->setText(QCoreApplication::translate("MainWindow", "C0", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "Unknown User", nullptr));
        menuApplication->setTitle(QCoreApplication::translate("MainWindow", "Application", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
