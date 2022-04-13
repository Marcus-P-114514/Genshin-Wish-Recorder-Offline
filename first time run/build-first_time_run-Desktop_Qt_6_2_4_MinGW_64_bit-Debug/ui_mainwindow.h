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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *title_3;
    QLabel *instruction_3;
    QLineEdit *input_username;
    QLabel *instruction_4;
    QLabel *instruction_5;
    QLineEdit *input_uid;
    QLabel *instruction_6;
    QLineEdit *input_signature;
    QPushButton *previous_page_from_page_three_button;
    QGraphicsView *back_to_page_two_bg;
    QGraphicsView *next_from_page_three;
    QPushButton *next_page_from_page_three_button;
    QWidget *tab_4;
    QLabel *title_4;
    QLabel *instruction_7;
    QComboBox *avatar_picker;
    QGraphicsView *back_to_page_three_bg;
    QPushButton *previous_page_from_page_four_button;
    QGraphicsView *next_from_page_four;
    QPushButton *next_page_from_page_four_button;
    QWidget *tab_5;
    QLabel *title_5;
    QLabel *instruction_8;
    QPushButton *previous_page_from_page_five_button;
    QGraphicsView *back_to_page_four_bg;
    QGraphicsView *next_from_page_five;
    QPushButton *next_page_from_page_five_button;
    QWidget *tab_6;
    QLabel *title_6;
    QLabel *instruction_9;
    QPushButton *previous_page_from_page_six_button;
    QGraphicsView *back_to_page_five_bg;
    QGraphicsView *next_from_page_six;
    QPushButton *next_page_from_page_six_button;

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
        next_from_page_two->setGeometry(QRect(700, 450, 171, 51));
        next_from_page_two->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_two_button = new QPushButton(tab_2);
        next_page_from_page_two_button->setObjectName(QString::fromUtf8("next_page_from_page_two_button"));
        next_page_from_page_two_button->setGeometry(QRect(700, 450, 171, 51));
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
        title_3 = new QLabel(tab_3);
        title_3->setObjectName(QString::fromUtf8("title_3"));
        title_3->setGeometry(QRect(10, 0, 851, 51));
        title_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_3 = new QLabel(tab_3);
        instruction_3->setObjectName(QString::fromUtf8("instruction_3"));
        instruction_3->setGeometry(QRect(10, 50, 861, 121));
        instruction_3->setToolTipDuration(2);
        instruction_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_3->setWordWrap(true);
        input_username = new QLineEdit(tab_3);
        input_username->setObjectName(QString::fromUtf8("input_username"));
        input_username->setGeometry(QRect(130, 110, 601, 27));
        input_username->setStyleSheet(QString::fromUtf8("border-color: rgb(149, 202, 243);\n"
""));
        instruction_4 = new QLabel(tab_3);
        instruction_4->setObjectName(QString::fromUtf8("instruction_4"));
        instruction_4->setGeometry(QRect(10, 110, 121, 31));
        instruction_4->setToolTipDuration(2);
        instruction_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_4->setWordWrap(true);
        instruction_5 = new QLabel(tab_3);
        instruction_5->setObjectName(QString::fromUtf8("instruction_5"));
        instruction_5->setGeometry(QRect(10, 140, 121, 31));
        instruction_5->setToolTipDuration(2);
        instruction_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_5->setWordWrap(true);
        input_uid = new QLineEdit(tab_3);
        input_uid->setObjectName(QString::fromUtf8("input_uid"));
        input_uid->setGeometry(QRect(130, 140, 601, 27));
        input_uid->setStyleSheet(QString::fromUtf8("border-color: rgb(149, 202, 243);\n"
""));
        instruction_6 = new QLabel(tab_3);
        instruction_6->setObjectName(QString::fromUtf8("instruction_6"));
        instruction_6->setGeometry(QRect(10, 170, 121, 31));
        instruction_6->setToolTipDuration(2);
        instruction_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_6->setWordWrap(true);
        input_signature = new QLineEdit(tab_3);
        input_signature->setObjectName(QString::fromUtf8("input_signature"));
        input_signature->setGeometry(QRect(130, 170, 601, 27));
        input_signature->setStyleSheet(QString::fromUtf8("border-color: rgb(149, 202, 243);\n"
""));
        previous_page_from_page_three_button = new QPushButton(tab_3);
        previous_page_from_page_three_button->setObjectName(QString::fromUtf8("previous_page_from_page_three_button"));
        previous_page_from_page_three_button->setGeometry(QRect(0, 450, 141, 51));
        previous_page_from_page_three_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        back_to_page_two_bg = new QGraphicsView(tab_3);
        back_to_page_two_bg->setObjectName(QString::fromUtf8("back_to_page_two_bg"));
        back_to_page_two_bg->setGeometry(QRect(0, 450, 151, 51));
        back_to_page_two_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_back.png);"));
        next_from_page_three = new QGraphicsView(tab_3);
        next_from_page_three->setObjectName(QString::fromUtf8("next_from_page_three"));
        next_from_page_three->setGeometry(QRect(700, 450, 171, 51));
        next_from_page_three->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_three_button = new QPushButton(tab_3);
        next_page_from_page_three_button->setObjectName(QString::fromUtf8("next_page_from_page_three_button"));
        next_page_from_page_three_button->setGeometry(QRect(700, 450, 171, 51));
        next_page_from_page_three_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        frame->addTab(tab_3, QString());
        back_to_page_two_bg->raise();
        title_3->raise();
        instruction_3->raise();
        instruction_4->raise();
        instruction_5->raise();
        input_username->raise();
        input_uid->raise();
        instruction_6->raise();
        input_signature->raise();
        previous_page_from_page_three_button->raise();
        next_from_page_three->raise();
        next_page_from_page_three_button->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        title_4 = new QLabel(tab_4);
        title_4->setObjectName(QString::fromUtf8("title_4"));
        title_4->setGeometry(QRect(10, 0, 851, 51));
        title_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_7 = new QLabel(tab_4);
        instruction_7->setObjectName(QString::fromUtf8("instruction_7"));
        instruction_7->setGeometry(QRect(10, 40, 861, 31));
        instruction_7->setToolTipDuration(2);
        instruction_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_7->setWordWrap(true);
        avatar_picker = new QComboBox(tab_4);
        avatar_picker->setObjectName(QString::fromUtf8("avatar_picker"));
        avatar_picker->setGeometry(QRect(10, 90, 851, 28));
        back_to_page_three_bg = new QGraphicsView(tab_4);
        back_to_page_three_bg->setObjectName(QString::fromUtf8("back_to_page_three_bg"));
        back_to_page_three_bg->setGeometry(QRect(0, 450, 151, 51));
        back_to_page_three_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_back.png);"));
        previous_page_from_page_four_button = new QPushButton(tab_4);
        previous_page_from_page_four_button->setObjectName(QString::fromUtf8("previous_page_from_page_four_button"));
        previous_page_from_page_four_button->setGeometry(QRect(0, 450, 141, 51));
        previous_page_from_page_four_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        next_from_page_four = new QGraphicsView(tab_4);
        next_from_page_four->setObjectName(QString::fromUtf8("next_from_page_four"));
        next_from_page_four->setGeometry(QRect(700, 450, 171, 51));
        next_from_page_four->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_four_button = new QPushButton(tab_4);
        next_page_from_page_four_button->setObjectName(QString::fromUtf8("next_page_from_page_four_button"));
        next_page_from_page_four_button->setGeometry(QRect(700, 450, 171, 51));
        next_page_from_page_four_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        frame->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        title_5 = new QLabel(tab_5);
        title_5->setObjectName(QString::fromUtf8("title_5"));
        title_5->setGeometry(QRect(10, 0, 851, 51));
        title_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_8 = new QLabel(tab_5);
        instruction_8->setObjectName(QString::fromUtf8("instruction_8"));
        instruction_8->setGeometry(QRect(10, 40, 861, 81));
        instruction_8->setToolTipDuration(2);
        instruction_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_8->setWordWrap(true);
        previous_page_from_page_five_button = new QPushButton(tab_5);
        previous_page_from_page_five_button->setObjectName(QString::fromUtf8("previous_page_from_page_five_button"));
        previous_page_from_page_five_button->setGeometry(QRect(0, 450, 141, 51));
        previous_page_from_page_five_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        back_to_page_four_bg = new QGraphicsView(tab_5);
        back_to_page_four_bg->setObjectName(QString::fromUtf8("back_to_page_four_bg"));
        back_to_page_four_bg->setGeometry(QRect(0, 450, 151, 51));
        back_to_page_four_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_back.png);"));
        next_from_page_five = new QGraphicsView(tab_5);
        next_from_page_five->setObjectName(QString::fromUtf8("next_from_page_five"));
        next_from_page_five->setGeometry(QRect(700, 450, 171, 51));
        next_from_page_five->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_five_button = new QPushButton(tab_5);
        next_page_from_page_five_button->setObjectName(QString::fromUtf8("next_page_from_page_five_button"));
        next_page_from_page_five_button->setGeometry(QRect(700, 450, 171, 51));
        next_page_from_page_five_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        frame->addTab(tab_5, QString());
        back_to_page_four_bg->raise();
        title_5->raise();
        instruction_8->raise();
        previous_page_from_page_five_button->raise();
        next_from_page_five->raise();
        next_page_from_page_five_button->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        title_6 = new QLabel(tab_6);
        title_6->setObjectName(QString::fromUtf8("title_6"));
        title_6->setGeometry(QRect(10, 0, 851, 51));
        title_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_9 = new QLabel(tab_6);
        instruction_9->setObjectName(QString::fromUtf8("instruction_9"));
        instruction_9->setGeometry(QRect(10, 40, 861, 81));
        instruction_9->setToolTipDuration(2);
        instruction_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";"));
        instruction_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_9->setWordWrap(true);
        previous_page_from_page_six_button = new QPushButton(tab_6);
        previous_page_from_page_six_button->setObjectName(QString::fromUtf8("previous_page_from_page_six_button"));
        previous_page_from_page_six_button->setGeometry(QRect(0, 450, 141, 51));
        previous_page_from_page_six_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        back_to_page_five_bg = new QGraphicsView(tab_6);
        back_to_page_five_bg->setObjectName(QString::fromUtf8("back_to_page_five_bg"));
        back_to_page_five_bg->setGeometry(QRect(0, 450, 151, 51));
        back_to_page_five_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_back.png);"));
        next_from_page_six = new QGraphicsView(tab_6);
        next_from_page_six->setObjectName(QString::fromUtf8("next_from_page_six"));
        next_from_page_six->setGeometry(QRect(700, 450, 171, 51));
        next_from_page_six->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        next_page_from_page_six_button = new QPushButton(tab_6);
        next_page_from_page_six_button->setObjectName(QString::fromUtf8("next_page_from_page_six_button"));
        next_page_from_page_six_button->setGeometry(QRect(700, 450, 171, 51));
        next_page_from_page_six_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        frame->addTab(tab_6, QString());
        back_to_page_five_bg->raise();
        title_6->raise();
        instruction_9->raise();
        previous_page_from_page_six_button->raise();
        next_from_page_six->raise();
        next_page_from_page_six_button->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        frame->setCurrentIndex(5);


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
        title_3->setText(QCoreApplication::translate("MainWindow", "User Profile", nullptr));
        instruction_3->setText(QCoreApplication::translate("MainWindow", "Please enter your basic user profile here. Please note that we do not use your information to get any data. The information you enter are only for displaying.", nullptr));
        instruction_4->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        instruction_5->setText(QCoreApplication::translate("MainWindow", "UID:", nullptr));
        instruction_6->setText(QCoreApplication::translate("MainWindow", "Signature:", nullptr));
        previous_page_from_page_three_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        next_page_from_page_three_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        frame->setTabText(frame->indexOf(tab_3), QCoreApplication::translate("MainWindow", "User Profile", nullptr));
        title_4->setText(QCoreApplication::translate("MainWindow", "Avatar", nullptr));
        instruction_7->setText(QCoreApplication::translate("MainWindow", "Please choose an avatar that you prefer. You can change it later any time.", nullptr));
        previous_page_from_page_four_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        next_page_from_page_four_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        frame->setTabText(frame->indexOf(tab_4), QCoreApplication::translate("MainWindow", "User Avatar", nullptr));
        title_5->setText(QCoreApplication::translate("MainWindow", "Record", nullptr));
        instruction_8->setText(QCoreApplication::translate("MainWindow", "In this section you are going to enter your wish record. Please enter that in the new window. If there is no new window pop out, please find it in your task bar. If there is still nothing, simply open \"record-upd.exe\"", nullptr));
        previous_page_from_page_five_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        next_page_from_page_five_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        frame->setTabText(frame->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Record", nullptr));
        title_6->setText(QCoreApplication::translate("MainWindow", "Finish", nullptr));
        instruction_9->setText(QCoreApplication::translate("MainWindow", "That is end of the setup. Please click \"next\" to start to use, if you wish to change your settings, please click \"back\".", nullptr));
        previous_page_from_page_six_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        next_page_from_page_six_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        frame->setTabText(frame->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
