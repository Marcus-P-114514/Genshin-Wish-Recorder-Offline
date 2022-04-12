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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *background;
    QTabWidget *frame;
    QWidget *tab;
    QLabel *title_1;
    QLabel *instruction_1;
    QTextBrowser *license_browser;
    QGraphicsView *next_from_page_one;
    QPushButton *next_page_from_page_one_button;
    QWidget *tab_2;
    QLabel *title_2;
    QLabel *instruction_2;
    QGraphicsView *next_from_page_two;
    QPushButton *next_page_from_page_two_button;
    QGraphicsView *back_to_page_one_bg;
    QPushButton *previous_page_from_page_two_button;
    QWidget *tab_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(965, 619);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QGraphicsView(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-10, 1, 971, 641));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/bg.png);"));
        frame = new QTabWidget(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 30, 871, 541));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgba(255, 255, 255, 0);\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(255, 255, 255);"));
        frame->setDocumentMode(true);
        frame->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        title_1 = new QLabel(tab);
        title_1->setObjectName(QString::fromUtf8("title_1"));
        title_1->setGeometry(QRect(10, 10, 851, 31));
        title_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_1 = new QLabel(tab);
        instruction_1->setObjectName(QString::fromUtf8("instruction_1"));
        instruction_1->setGeometry(QRect(10, 50, 861, 121));
        instruction_1->setToolTipDuration(2);
        instruction_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_1->setWordWrap(true);
        license_browser = new QTextBrowser(tab);
        license_browser->setObjectName(QString::fromUtf8("license_browser"));
        license_browser->setGeometry(QRect(10, 170, 861, 281));
        license_browser->setStyleSheet(QString::fromUtf8("color: rgb(33, 150, 243);"));
        license_browser->setSource(QUrl(QString::fromUtf8("qrc:/docs/resources/license")));
        next_from_page_one = new QGraphicsView(tab);
        next_from_page_one->setObjectName(QString::fromUtf8("next_from_page_one"));
        next_from_page_one->setGeometry(QRect(700, 450, 171, 51));
        next_from_page_one->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_one_button = new QPushButton(tab);
        next_page_from_page_one_button->setObjectName(QString::fromUtf8("next_page_from_page_one_button"));
        next_page_from_page_one_button->setGeometry(QRect(700, 450, 171, 51));
        next_page_from_page_one_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        frame->addTab(tab, QString());
        title_1->raise();
        instruction_1->raise();
        next_from_page_one->raise();
        license_browser->raise();
        next_page_from_page_one_button->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        title_2 = new QLabel(tab_2);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setGeometry(QRect(10, 10, 851, 51));
        title_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_2 = new QLabel(tab_2);
        instruction_2->setObjectName(QString::fromUtf8("instruction_2"));
        instruction_2->setGeometry(QRect(10, 60, 861, 121));
        instruction_2->setToolTipDuration(2);
        instruction_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_2->setWordWrap(true);
        next_from_page_two = new QGraphicsView(tab_2);
        next_from_page_two->setObjectName(QString::fromUtf8("next_from_page_two"));
        next_from_page_two->setGeometry(QRect(680, 450, 171, 51));
        next_from_page_two->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_two_button = new QPushButton(tab_2);
        next_page_from_page_two_button->setObjectName(QString::fromUtf8("next_page_from_page_two_button"));
        next_page_from_page_two_button->setGeometry(QRect(680, 450, 171, 51));
        next_page_from_page_two_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        back_to_page_one_bg = new QGraphicsView(tab_2);
        back_to_page_one_bg->setObjectName(QString::fromUtf8("back_to_page_one_bg"));
        back_to_page_one_bg->setGeometry(QRect(0, 450, 151, 51));
        back_to_page_one_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_back.png);"));
        previous_page_from_page_two_button = new QPushButton(tab_2);
        previous_page_from_page_two_button->setObjectName(QString::fromUtf8("previous_page_from_page_two_button"));
        previous_page_from_page_two_button->setGeometry(QRect(0, 450, 141, 51));
        previous_page_from_page_two_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        frame->addTab(tab_2, QString());
        next_from_page_two->raise();
        title_2->raise();
        instruction_2->raise();
        next_page_from_page_two_button->raise();
        back_to_page_one_bg->raise();
        previous_page_from_page_two_button->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        frame->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title_1->setText(QCoreApplication::translate("MainWindow", "License", nullptr));
        instruction_1->setText(QCoreApplication::translate("MainWindow", "Once you clicked next you agree with this license. Please note that all the chracter and weapon pictures is not part of this project. They belongs to BWIKI of Genshin Impact, which is not allowed for commercial use. If you reject any part of the licence or word in this sentence, juet close the window.", nullptr));
        next_page_from_page_one_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        frame->setTabText(frame->indexOf(tab), QCoreApplication::translate("MainWindow", "License", nullptr));
        title_2->setText(QCoreApplication::translate("MainWindow", "Language Settings", nullptr));
        instruction_2->setText(QCoreApplication::translate("MainWindow", "The language setting should be the same as your system. However, we only support English and Chinese. If your system preferred language is neither English nor Chinese, a fallback expected.", nullptr));
        next_page_from_page_two_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        previous_page_from_page_two_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        frame->setTabText(frame->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Language Settings", nullptr));
        frame->setTabText(frame->indexOf(tab_3), QCoreApplication::translate("MainWindow", "User Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
