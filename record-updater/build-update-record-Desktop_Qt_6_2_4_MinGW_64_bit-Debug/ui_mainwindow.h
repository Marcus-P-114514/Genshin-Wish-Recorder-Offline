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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *bg;
    QLabel *title;
    QLabel *instruction_1;
    QTabWidget *wishtype_selecter;
    QWidget *tab;
    QGraphicsView *report_three_star_chracter_event_wish_background;
    QPushButton *report_three_star_for_chracter_event_wish;
    QLabel *instruction_2;
    QComboBox *chracter_event_wish_four_star_selecter;
    QGraphicsView *submit_four_star_chracter_event_wish_bg;
    QPushButton *submit_four_star_character_event_wish;
    QLabel *instruction_3;
    QComboBox *chracter_event_wish_five_star_selecter;
    QPushButton *submit_five_star_character_event_wish;
    QGraphicsView *submit_five_star_chracter_event_wish_bg;
    QWidget *tab_2;
    QLabel *instruction_4;
    QPushButton *submit_five_star_weapon_wish;
    QPushButton *submit_four_star_weapon_wish;
    QComboBox *weapon_wish_five_star_selecter;
    QComboBox *weapon_wish_four_star_selecter;
    QGraphicsView *submit_five_star_weapon_wish_bg;
    QPushButton *report_three_star_for_weapon_wish;
    QLabel *instruction_5;
    QGraphicsView *submit_four_star_weapon_wish_bg;
    QGraphicsView *report_three_star_chracter_event_wish_background_weapon_wish;
    QWidget *tab_3;
    QComboBox *standard_wish_five_star_selecter;
    QPushButton *submit_five_star_standard_wish;
    QGraphicsView *submit_five_star_standard_wish_bg;
    QPushButton *submit_four_star_standard_wish;
    QLabel *instruction_6;
    QComboBox *standrad_wish_four_star_selecter;
    QLabel *instruction_7;
    QGraphicsView *report_three_star_chracter_event_wish_background_standard_wish;
    QPushButton *report_three_star_for_standard_wish;
    QGraphicsView *submit_four_star_standard_wish_bg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1139, 630);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bg = new QGraphicsView(centralwidget);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(0, -10, 1151, 661));
        bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/bg.png);"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(50, 40, 881, 41));
        title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 20pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
""));
        instruction_1 = new QLabel(centralwidget);
        instruction_1->setObjectName(QString::fromUtf8("instruction_1"));
        instruction_1->setGeometry(QRect(50, 90, 1041, 191));
        instruction_1->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_1->setWordWrap(true);
        wishtype_selecter = new QTabWidget(centralwidget);
        wishtype_selecter->setObjectName(QString::fromUtf8("wishtype_selecter"));
        wishtype_selecter->setGeometry(QRect(50, 280, 1041, 291));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        report_three_star_chracter_event_wish_background = new QGraphicsView(tab);
        report_three_star_chracter_event_wish_background->setObjectName(QString::fromUtf8("report_three_star_chracter_event_wish_background"));
        report_three_star_chracter_event_wish_background->setGeometry(QRect(10, 10, 171, 51));
        report_three_star_chracter_event_wish_background->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        report_three_star_for_chracter_event_wish = new QPushButton(tab);
        report_three_star_for_chracter_event_wish->setObjectName(QString::fromUtf8("report_three_star_for_chracter_event_wish"));
        report_three_star_for_chracter_event_wish->setGeometry(QRect(10, 10, 171, 51));
        report_three_star_for_chracter_event_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        instruction_2 = new QLabel(tab);
        instruction_2->setObjectName(QString::fromUtf8("instruction_2"));
        instruction_2->setGeometry(QRect(20, 80, 31, 31));
        instruction_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_2->setWordWrap(true);
        chracter_event_wish_four_star_selecter = new QComboBox(tab);
        chracter_event_wish_four_star_selecter->setObjectName(QString::fromUtf8("chracter_event_wish_four_star_selecter"));
        chracter_event_wish_four_star_selecter->setGeometry(QRect(60, 80, 781, 31));
        chracter_event_wish_four_star_selecter->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        submit_four_star_chracter_event_wish_bg = new QGraphicsView(tab);
        submit_four_star_chracter_event_wish_bg->setObjectName(QString::fromUtf8("submit_four_star_chracter_event_wish_bg"));
        submit_four_star_chracter_event_wish_bg->setGeometry(QRect(860, 70, 151, 51));
        submit_four_star_chracter_event_wish_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        submit_four_star_character_event_wish = new QPushButton(tab);
        submit_four_star_character_event_wish->setObjectName(QString::fromUtf8("submit_four_star_character_event_wish"));
        submit_four_star_character_event_wish->setGeometry(QRect(860, 70, 151, 51));
        submit_four_star_character_event_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        instruction_3 = new QLabel(tab);
        instruction_3->setObjectName(QString::fromUtf8("instruction_3"));
        instruction_3->setGeometry(QRect(20, 130, 31, 31));
        instruction_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_3->setWordWrap(true);
        chracter_event_wish_five_star_selecter = new QComboBox(tab);
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->addItem(QString());
        chracter_event_wish_five_star_selecter->setObjectName(QString::fromUtf8("chracter_event_wish_five_star_selecter"));
        chracter_event_wish_five_star_selecter->setGeometry(QRect(60, 130, 781, 31));
        chracter_event_wish_five_star_selecter->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        submit_five_star_character_event_wish = new QPushButton(tab);
        submit_five_star_character_event_wish->setObjectName(QString::fromUtf8("submit_five_star_character_event_wish"));
        submit_five_star_character_event_wish->setGeometry(QRect(860, 120, 151, 51));
        submit_five_star_character_event_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        submit_five_star_chracter_event_wish_bg = new QGraphicsView(tab);
        submit_five_star_chracter_event_wish_bg->setObjectName(QString::fromUtf8("submit_five_star_chracter_event_wish_bg"));
        submit_five_star_chracter_event_wish_bg->setGeometry(QRect(860, 120, 151, 51));
        submit_five_star_chracter_event_wish_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        wishtype_selecter->addTab(tab, QString());
        submit_five_star_chracter_event_wish_bg->raise();
        report_three_star_chracter_event_wish_background->raise();
        report_three_star_for_chracter_event_wish->raise();
        instruction_2->raise();
        chracter_event_wish_four_star_selecter->raise();
        submit_four_star_chracter_event_wish_bg->raise();
        submit_four_star_character_event_wish->raise();
        instruction_3->raise();
        chracter_event_wish_five_star_selecter->raise();
        submit_five_star_character_event_wish->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        instruction_4 = new QLabel(tab_2);
        instruction_4->setObjectName(QString::fromUtf8("instruction_4"));
        instruction_4->setGeometry(QRect(20, 130, 31, 31));
        instruction_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_4->setWordWrap(true);
        submit_five_star_weapon_wish = new QPushButton(tab_2);
        submit_five_star_weapon_wish->setObjectName(QString::fromUtf8("submit_five_star_weapon_wish"));
        submit_five_star_weapon_wish->setGeometry(QRect(860, 120, 151, 51));
        submit_five_star_weapon_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        submit_four_star_weapon_wish = new QPushButton(tab_2);
        submit_four_star_weapon_wish->setObjectName(QString::fromUtf8("submit_four_star_weapon_wish"));
        submit_four_star_weapon_wish->setGeometry(QRect(860, 70, 151, 51));
        submit_four_star_weapon_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        weapon_wish_five_star_selecter = new QComboBox(tab_2);
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->addItem(QString());
        weapon_wish_five_star_selecter->setObjectName(QString::fromUtf8("weapon_wish_five_star_selecter"));
        weapon_wish_five_star_selecter->setGeometry(QRect(60, 130, 781, 31));
        weapon_wish_five_star_selecter->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        weapon_wish_four_star_selecter = new QComboBox(tab_2);
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->addItem(QString());
        weapon_wish_four_star_selecter->setObjectName(QString::fromUtf8("weapon_wish_four_star_selecter"));
        weapon_wish_four_star_selecter->setGeometry(QRect(60, 80, 781, 31));
        weapon_wish_four_star_selecter->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        submit_five_star_weapon_wish_bg = new QGraphicsView(tab_2);
        submit_five_star_weapon_wish_bg->setObjectName(QString::fromUtf8("submit_five_star_weapon_wish_bg"));
        submit_five_star_weapon_wish_bg->setGeometry(QRect(860, 120, 151, 51));
        submit_five_star_weapon_wish_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        report_three_star_for_weapon_wish = new QPushButton(tab_2);
        report_three_star_for_weapon_wish->setObjectName(QString::fromUtf8("report_three_star_for_weapon_wish"));
        report_three_star_for_weapon_wish->setGeometry(QRect(10, 10, 171, 51));
        report_three_star_for_weapon_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        instruction_5 = new QLabel(tab_2);
        instruction_5->setObjectName(QString::fromUtf8("instruction_5"));
        instruction_5->setGeometry(QRect(20, 80, 31, 31));
        instruction_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_5->setWordWrap(true);
        submit_four_star_weapon_wish_bg = new QGraphicsView(tab_2);
        submit_four_star_weapon_wish_bg->setObjectName(QString::fromUtf8("submit_four_star_weapon_wish_bg"));
        submit_four_star_weapon_wish_bg->setGeometry(QRect(860, 70, 151, 51));
        submit_four_star_weapon_wish_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        report_three_star_chracter_event_wish_background_weapon_wish = new QGraphicsView(tab_2);
        report_three_star_chracter_event_wish_background_weapon_wish->setObjectName(QString::fromUtf8("report_three_star_chracter_event_wish_background_weapon_wish"));
        report_three_star_chracter_event_wish_background_weapon_wish->setGeometry(QRect(10, 10, 171, 51));
        report_three_star_chracter_event_wish_background_weapon_wish->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        wishtype_selecter->addTab(tab_2, QString());
        submit_five_star_weapon_wish_bg->raise();
        submit_four_star_weapon_wish_bg->raise();
        report_three_star_chracter_event_wish_background_weapon_wish->raise();
        instruction_4->raise();
        submit_five_star_weapon_wish->raise();
        submit_four_star_weapon_wish->raise();
        weapon_wish_five_star_selecter->raise();
        weapon_wish_four_star_selecter->raise();
        report_three_star_for_weapon_wish->raise();
        instruction_5->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        standard_wish_five_star_selecter = new QComboBox(tab_3);
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->addItem(QString());
        standard_wish_five_star_selecter->setObjectName(QString::fromUtf8("standard_wish_five_star_selecter"));
        standard_wish_five_star_selecter->setGeometry(QRect(60, 130, 781, 31));
        standard_wish_five_star_selecter->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        submit_five_star_standard_wish = new QPushButton(tab_3);
        submit_five_star_standard_wish->setObjectName(QString::fromUtf8("submit_five_star_standard_wish"));
        submit_five_star_standard_wish->setGeometry(QRect(860, 120, 151, 51));
        submit_five_star_standard_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        submit_five_star_standard_wish_bg = new QGraphicsView(tab_3);
        submit_five_star_standard_wish_bg->setObjectName(QString::fromUtf8("submit_five_star_standard_wish_bg"));
        submit_five_star_standard_wish_bg->setGeometry(QRect(860, 120, 151, 51));
        submit_five_star_standard_wish_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        submit_four_star_standard_wish = new QPushButton(tab_3);
        submit_four_star_standard_wish->setObjectName(QString::fromUtf8("submit_four_star_standard_wish"));
        submit_four_star_standard_wish->setGeometry(QRect(860, 70, 151, 51));
        submit_four_star_standard_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        instruction_6 = new QLabel(tab_3);
        instruction_6->setObjectName(QString::fromUtf8("instruction_6"));
        instruction_6->setGeometry(QRect(20, 80, 31, 31));
        instruction_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_6->setWordWrap(true);
        standrad_wish_four_star_selecter = new QComboBox(tab_3);
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->addItem(QString());
        standrad_wish_four_star_selecter->setObjectName(QString::fromUtf8("standrad_wish_four_star_selecter"));
        standrad_wish_four_star_selecter->setGeometry(QRect(60, 80, 781, 31));
        standrad_wish_four_star_selecter->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";"));
        instruction_7 = new QLabel(tab_3);
        instruction_7->setObjectName(QString::fromUtf8("instruction_7"));
        instruction_7->setGeometry(QRect(20, 130, 31, 31));
        instruction_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        instruction_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        instruction_7->setWordWrap(true);
        report_three_star_chracter_event_wish_background_standard_wish = new QGraphicsView(tab_3);
        report_three_star_chracter_event_wish_background_standard_wish->setObjectName(QString::fromUtf8("report_three_star_chracter_event_wish_background_standard_wish"));
        report_three_star_chracter_event_wish_background_standard_wish->setGeometry(QRect(10, 10, 171, 51));
        report_three_star_chracter_event_wish_background_standard_wish->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        report_three_star_for_standard_wish = new QPushButton(tab_3);
        report_three_star_for_standard_wish->setObjectName(QString::fromUtf8("report_three_star_for_standard_wish"));
        report_three_star_for_standard_wish->setGeometry(QRect(10, 10, 171, 51));
        report_three_star_for_standard_wish->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\200\235\346\272\220\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        submit_four_star_standard_wish_bg = new QGraphicsView(tab_3);
        submit_four_star_standard_wish_bg->setObjectName(QString::fromUtf8("submit_four_star_standard_wish_bg"));
        submit_four_star_standard_wish_bg->setGeometry(QRect(860, 70, 151, 51));
        submit_four_star_standard_wish_bg->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/resources/pushbutton_language.png);"));
        wishtype_selecter->addTab(tab_3, QString());
        submit_five_star_standard_wish_bg->raise();
        submit_four_star_standard_wish_bg->raise();
        standard_wish_five_star_selecter->raise();
        submit_five_star_standard_wish->raise();
        submit_four_star_standard_wish->raise();
        instruction_6->raise();
        standrad_wish_four_star_selecter->raise();
        instruction_7->raise();
        report_three_star_chracter_event_wish_background_standard_wish->raise();
        report_three_star_for_standard_wish->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        wishtype_selecter->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Update Wish Record", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Update Wish Record", nullptr));
        instruction_1->setText(QCoreApplication::translate("MainWindow", "To update your record, firstly you need to choose a tab of wish type. Then, if you got a 3* weapon, just click on the 3* button and your changes will be submitted immediately.. If you got 4* or 5* item please choose in the combobox of what you get, then click the submit button. At last, close this window and go back to the main window. If it is not refreshed, just close the application and re-open it.\n"
"To search fast using combobox, just select the combobox, and it should turn blue. Then in your keyboard, type the first few words. E.g. I'm searching for Everlasting moonglow, just click it and input \"EVERLAST\".", nullptr));
        report_three_star_for_chracter_event_wish->setText(QCoreApplication::translate("MainWindow", "3*", nullptr));
        instruction_2->setText(QCoreApplication::translate("MainWindow", "4*:", nullptr));
        submit_four_star_character_event_wish->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        instruction_3->setText(QCoreApplication::translate("MainWindow", "5*:", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(0, QCoreApplication::translate("MainWindow", "albedo", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(1, QCoreApplication::translate("MainWindow", "arataki_itto", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(2, QCoreApplication::translate("MainWindow", "dluic", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(3, QCoreApplication::translate("MainWindow", "eula", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(4, QCoreApplication::translate("MainWindow", "ganyu", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(5, QCoreApplication::translate("MainWindow", "hutao", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(6, QCoreApplication::translate("MainWindow", "jean", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(7, QCoreApplication::translate("MainWindow", "kaedehara_kazuha", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(8, QCoreApplication::translate("MainWindow", "kamisato_ayaka", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(9, QCoreApplication::translate("MainWindow", "kamisato_ayato", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(10, QCoreApplication::translate("MainWindow", "keqing", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(11, QCoreApplication::translate("MainWindow", "klee", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(12, QCoreApplication::translate("MainWindow", "mona", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(13, QCoreApplication::translate("MainWindow", "qiqi", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(14, QCoreApplication::translate("MainWindow", "raiden_shogun", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(15, QCoreApplication::translate("MainWindow", "sangonomiya_kokomi", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(16, QCoreApplication::translate("MainWindow", "shenhe", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(17, QCoreApplication::translate("MainWindow", "tartaglia", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(18, QCoreApplication::translate("MainWindow", "venti", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(19, QCoreApplication::translate("MainWindow", "xiao", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(20, QCoreApplication::translate("MainWindow", "yae_miko", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(21, QCoreApplication::translate("MainWindow", "yoimiya", nullptr));
        chracter_event_wish_five_star_selecter->setItemText(22, QCoreApplication::translate("MainWindow", "zhongli", nullptr));

        submit_five_star_character_event_wish->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        wishtype_selecter->setTabText(wishtype_selecter->indexOf(tab), QCoreApplication::translate("MainWindow", "Chracter Event Wish", nullptr));
        instruction_4->setText(QCoreApplication::translate("MainWindow", "5*:", nullptr));
        submit_five_star_weapon_wish->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        submit_four_star_weapon_wish->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        weapon_wish_five_star_selecter->setItemText(0, QCoreApplication::translate("MainWindow", "dluic", nullptr));
        weapon_wish_five_star_selecter->setItemText(1, QCoreApplication::translate("MainWindow", "jean", nullptr));
        weapon_wish_five_star_selecter->setItemText(2, QCoreApplication::translate("MainWindow", "keqing", nullptr));
        weapon_wish_five_star_selecter->setItemText(3, QCoreApplication::translate("MainWindow", "mona", nullptr));
        weapon_wish_five_star_selecter->setItemText(4, QCoreApplication::translate("MainWindow", "qiqi", nullptr));
        weapon_wish_five_star_selecter->setItemText(5, QCoreApplication::translate("MainWindow", "summit_shaper", nullptr));
        weapon_wish_five_star_selecter->setItemText(6, QCoreApplication::translate("MainWindow", "mistsplitter_reforged", nullptr));
        weapon_wish_five_star_selecter->setItemText(7, QCoreApplication::translate("MainWindow", "skyward_blade", nullptr));
        weapon_wish_five_star_selecter->setItemText(8, QCoreApplication::translate("MainWindow", "primordial_jade_wing_spear", nullptr));
        weapon_wish_five_star_selecter->setItemText(9, QCoreApplication::translate("MainWindow", "haran_geppaku_futsu", nullptr));
        weapon_wish_five_star_selecter->setItemText(10, QCoreApplication::translate("MainWindow", "freedom_sworn", nullptr));
        weapon_wish_five_star_selecter->setItemText(11, QCoreApplication::translate("MainWindow", "skyward_pride", nullptr));
        weapon_wish_five_star_selecter->setItemText(12, QCoreApplication::translate("MainWindow", "song_of_broken_pines", nullptr));
        weapon_wish_five_star_selecter->setItemText(13, QCoreApplication::translate("MainWindow", "the_unforged", nullptr));
        weapon_wish_five_star_selecter->setItemText(14, QCoreApplication::translate("MainWindow", "redhorn_stonethresher", nullptr));
        weapon_wish_five_star_selecter->setItemText(15, QCoreApplication::translate("MainWindow", "polar_star", nullptr));
        weapon_wish_five_star_selecter->setItemText(16, QCoreApplication::translate("MainWindow", "skyward_harp", nullptr));
        weapon_wish_five_star_selecter->setItemText(17, QCoreApplication::translate("MainWindow", "wolfs_gravestone", nullptr));
        weapon_wish_five_star_selecter->setItemText(18, QCoreApplication::translate("MainWindow", "amos_bow", nullptr));
        weapon_wish_five_star_selecter->setItemText(19, QCoreApplication::translate("MainWindow", "elegy_for_the_end", nullptr));
        weapon_wish_five_star_selecter->setItemText(20, QCoreApplication::translate("MainWindow", "thundering_pluse", nullptr));
        weapon_wish_five_star_selecter->setItemText(21, QCoreApplication::translate("MainWindow", "everlasting_moonglow", nullptr));
        weapon_wish_five_star_selecter->setItemText(22, QCoreApplication::translate("MainWindow", "lost_prayer_to_the_scared_wind", nullptr));
        weapon_wish_five_star_selecter->setItemText(23, QCoreApplication::translate("MainWindow", "skyward_atlas", nullptr));
        weapon_wish_five_star_selecter->setItemText(24, QCoreApplication::translate("MainWindow", "kaguras_verity", nullptr));
        weapon_wish_five_star_selecter->setItemText(25, QCoreApplication::translate("MainWindow", "vortex_vanquisher", nullptr));
        weapon_wish_five_star_selecter->setItemText(26, QCoreApplication::translate("MainWindow", "engulfing_lightning", nullptr));
        weapon_wish_five_star_selecter->setItemText(27, QCoreApplication::translate("MainWindow", "staff_of_homa", nullptr));
        weapon_wish_five_star_selecter->setItemText(28, QCoreApplication::translate("MainWindow", "skyward_spine", nullptr));
        weapon_wish_five_star_selecter->setItemText(29, QCoreApplication::translate("MainWindow", "aqlia_favonia", nullptr));
        weapon_wish_five_star_selecter->setItemText(30, QCoreApplication::translate("MainWindow", "primordial_cutter", nullptr));

        weapon_wish_four_star_selecter->setItemText(0, QCoreApplication::translate("MainWindow", "amber", nullptr));
        weapon_wish_four_star_selecter->setItemText(1, QCoreApplication::translate("MainWindow", "barbara", nullptr));
        weapon_wish_four_star_selecter->setItemText(2, QCoreApplication::translate("MainWindow", "beidou", nullptr));
        weapon_wish_four_star_selecter->setItemText(3, QCoreApplication::translate("MainWindow", "benett", nullptr));
        weapon_wish_four_star_selecter->setItemText(4, QCoreApplication::translate("MainWindow", "chongyun", nullptr));
        weapon_wish_four_star_selecter->setItemText(5, QCoreApplication::translate("MainWindow", "diona", nullptr));
        weapon_wish_four_star_selecter->setItemText(6, QCoreApplication::translate("MainWindow", "fischl", nullptr));
        weapon_wish_four_star_selecter->setItemText(7, QCoreApplication::translate("MainWindow", "gorou", nullptr));
        weapon_wish_four_star_selecter->setItemText(8, QCoreApplication::translate("MainWindow", "kaeya", nullptr));
        weapon_wish_four_star_selecter->setItemText(9, QCoreApplication::translate("MainWindow", "kijou_sara", nullptr));
        weapon_wish_four_star_selecter->setItemText(10, QCoreApplication::translate("MainWindow", "lisa", nullptr));
        weapon_wish_four_star_selecter->setItemText(11, QCoreApplication::translate("MainWindow", "ningguang", nullptr));
        weapon_wish_four_star_selecter->setItemText(12, QCoreApplication::translate("MainWindow", "noelle", nullptr));
        weapon_wish_four_star_selecter->setItemText(13, QCoreApplication::translate("MainWindow", "razor", nullptr));
        weapon_wish_four_star_selecter->setItemText(14, QCoreApplication::translate("MainWindow", "rosaria", nullptr));
        weapon_wish_four_star_selecter->setItemText(15, QCoreApplication::translate("MainWindow", "sayu", nullptr));
        weapon_wish_four_star_selecter->setItemText(16, QCoreApplication::translate("MainWindow", "sucrose", nullptr));
        weapon_wish_four_star_selecter->setItemText(17, QCoreApplication::translate("MainWindow", "thoma", nullptr));
        weapon_wish_four_star_selecter->setItemText(18, QCoreApplication::translate("MainWindow", "xiangling", nullptr));
        weapon_wish_four_star_selecter->setItemText(19, QCoreApplication::translate("MainWindow", "xingqiu", nullptr));
        weapon_wish_four_star_selecter->setItemText(20, QCoreApplication::translate("MainWindow", "xinyan", nullptr));
        weapon_wish_four_star_selecter->setItemText(21, QCoreApplication::translate("MainWindow", "yanfei", nullptr));
        weapon_wish_four_star_selecter->setItemText(22, QCoreApplication::translate("MainWindow", "yunjin", nullptr));
        weapon_wish_four_star_selecter->setItemText(23, QCoreApplication::translate("MainWindow", "the_flute", nullptr));
        weapon_wish_four_star_selecter->setItemText(24, QCoreApplication::translate("MainWindow", "sacrificial_sword", nullptr));
        weapon_wish_four_star_selecter->setItemText(25, QCoreApplication::translate("MainWindow", "lions_roar", nullptr));
        weapon_wish_four_star_selecter->setItemText(26, QCoreApplication::translate("MainWindow", "the_bell", nullptr));
        weapon_wish_four_star_selecter->setItemText(27, QCoreApplication::translate("MainWindow", "rainslasher", nullptr));
        weapon_wish_four_star_selecter->setItemText(28, QCoreApplication::translate("MainWindow", "sacrificial_greatsword", nullptr));
        weapon_wish_four_star_selecter->setItemText(29, QCoreApplication::translate("MainWindow", "favonius_sword", nullptr));
        weapon_wish_four_star_selecter->setItemText(30, QCoreApplication::translate("MainWindow", "sacrificial_bow", nullptr));
        weapon_wish_four_star_selecter->setItemText(31, QCoreApplication::translate("MainWindow", "the_stringless", nullptr));
        weapon_wish_four_star_selecter->setItemText(32, QCoreApplication::translate("MainWindow", "rust", nullptr));
        weapon_wish_four_star_selecter->setItemText(33, QCoreApplication::translate("MainWindow", "favonius_codex", nullptr));
        weapon_wish_four_star_selecter->setItemText(34, QCoreApplication::translate("MainWindow", "sacrifical_fragments", nullptr));
        weapon_wish_four_star_selecter->setItemText(35, QCoreApplication::translate("MainWindow", "eye_of_preception", nullptr));
        weapon_wish_four_star_selecter->setItemText(36, QCoreApplication::translate("MainWindow", "favonius_warbow", nullptr));
        weapon_wish_four_star_selecter->setItemText(37, QCoreApplication::translate("MainWindow", "the_widsith", nullptr));
        weapon_wish_four_star_selecter->setItemText(38, QCoreApplication::translate("MainWindow", "sacrificial_lance", nullptr));
        weapon_wish_four_star_selecter->setItemText(39, QCoreApplication::translate("MainWindow", "dragons_bane", nullptr));
        weapon_wish_four_star_selecter->setItemText(40, QCoreApplication::translate("MainWindow", "the_alley_flash", nullptr));
        weapon_wish_four_star_selecter->setItemText(41, QCoreApplication::translate("MainWindow", "akuoumaru", nullptr));
        weapon_wish_four_star_selecter->setItemText(42, QCoreApplication::translate("MainWindow", "mitternachts_waltz", nullptr));
        weapon_wish_four_star_selecter->setItemText(43, QCoreApplication::translate("MainWindow", "alley_hunter", nullptr));
        weapon_wish_four_star_selecter->setItemText(44, QCoreApplication::translate("MainWindow", "wine_and_song", nullptr));
        weapon_wish_four_star_selecter->setItemText(45, QCoreApplication::translate("MainWindow", "wavebreakers_fin", nullptr));
        weapon_wish_four_star_selecter->setItemText(46, QCoreApplication::translate("MainWindow", "mouuns_moon", nullptr));
        weapon_wish_four_star_selecter->setItemText(47, QCoreApplication::translate("MainWindow", "lithic_blade", nullptr));
        weapon_wish_four_star_selecter->setItemText(48, QCoreApplication::translate("MainWindow", "lithic_spear", nullptr));

        report_three_star_for_weapon_wish->setText(QCoreApplication::translate("MainWindow", "3*", nullptr));
        instruction_5->setText(QCoreApplication::translate("MainWindow", "4*:", nullptr));
        wishtype_selecter->setTabText(wishtype_selecter->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Weapon Wish", nullptr));
        standard_wish_five_star_selecter->setItemText(0, QCoreApplication::translate("MainWindow", "dluic", nullptr));
        standard_wish_five_star_selecter->setItemText(1, QCoreApplication::translate("MainWindow", "jean", nullptr));
        standard_wish_five_star_selecter->setItemText(2, QCoreApplication::translate("MainWindow", "keqing", nullptr));
        standard_wish_five_star_selecter->setItemText(3, QCoreApplication::translate("MainWindow", "mona", nullptr));
        standard_wish_five_star_selecter->setItemText(4, QCoreApplication::translate("MainWindow", "qiqi", nullptr));
        standard_wish_five_star_selecter->setItemText(5, QCoreApplication::translate("MainWindow", "amos_bow", nullptr));
        standard_wish_five_star_selecter->setItemText(6, QCoreApplication::translate("MainWindow", "skyward_harp", nullptr));
        standard_wish_five_star_selecter->setItemText(7, QCoreApplication::translate("MainWindow", "lost_prayer_to_the_scared_wind", nullptr));
        standard_wish_five_star_selecter->setItemText(8, QCoreApplication::translate("MainWindow", "primordial_jade_winged_spear", nullptr));
        standard_wish_five_star_selecter->setItemText(9, QCoreApplication::translate("MainWindow", "skyward_spine", nullptr));
        standard_wish_five_star_selecter->setItemText(10, QCoreApplication::translate("MainWindow", "skyward_atlas", nullptr));
        standard_wish_five_star_selecter->setItemText(11, QCoreApplication::translate("MainWindow", "skyward_pride", nullptr));
        standard_wish_five_star_selecter->setItemText(12, QCoreApplication::translate("MainWindow", "skyward_blade", nullptr));
        standard_wish_five_star_selecter->setItemText(13, QCoreApplication::translate("MainWindow", "aqlia_favonia", nullptr));

        submit_five_star_standard_wish->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        submit_four_star_standard_wish->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        instruction_6->setText(QCoreApplication::translate("MainWindow", "4*:", nullptr));
        standrad_wish_four_star_selecter->setItemText(0, QCoreApplication::translate("MainWindow", "amber", nullptr));
        standrad_wish_four_star_selecter->setItemText(1, QCoreApplication::translate("MainWindow", "barbara", nullptr));
        standrad_wish_four_star_selecter->setItemText(2, QCoreApplication::translate("MainWindow", "beidou", nullptr));
        standrad_wish_four_star_selecter->setItemText(3, QCoreApplication::translate("MainWindow", "benett", nullptr));
        standrad_wish_four_star_selecter->setItemText(4, QCoreApplication::translate("MainWindow", "chongyun", nullptr));
        standrad_wish_four_star_selecter->setItemText(5, QCoreApplication::translate("MainWindow", "diona", nullptr));
        standrad_wish_four_star_selecter->setItemText(6, QCoreApplication::translate("MainWindow", "fischl", nullptr));
        standrad_wish_four_star_selecter->setItemText(7, QCoreApplication::translate("MainWindow", "gorou", nullptr));
        standrad_wish_four_star_selecter->setItemText(8, QCoreApplication::translate("MainWindow", "kaeya", nullptr));
        standrad_wish_four_star_selecter->setItemText(9, QCoreApplication::translate("MainWindow", "kijou_sara", nullptr));
        standrad_wish_four_star_selecter->setItemText(10, QCoreApplication::translate("MainWindow", "lisa", nullptr));
        standrad_wish_four_star_selecter->setItemText(11, QCoreApplication::translate("MainWindow", "ningguang", nullptr));
        standrad_wish_four_star_selecter->setItemText(12, QCoreApplication::translate("MainWindow", "noelle", nullptr));
        standrad_wish_four_star_selecter->setItemText(13, QCoreApplication::translate("MainWindow", "razor", nullptr));
        standrad_wish_four_star_selecter->setItemText(14, QCoreApplication::translate("MainWindow", "rosaria", nullptr));
        standrad_wish_four_star_selecter->setItemText(15, QCoreApplication::translate("MainWindow", "sayu", nullptr));
        standrad_wish_four_star_selecter->setItemText(16, QCoreApplication::translate("MainWindow", "sucrose", nullptr));
        standrad_wish_four_star_selecter->setItemText(17, QCoreApplication::translate("MainWindow", "thoma", nullptr));
        standrad_wish_four_star_selecter->setItemText(18, QCoreApplication::translate("MainWindow", "xiangling", nullptr));
        standrad_wish_four_star_selecter->setItemText(19, QCoreApplication::translate("MainWindow", "xingqiu", nullptr));
        standrad_wish_four_star_selecter->setItemText(20, QCoreApplication::translate("MainWindow", "xinyan", nullptr));
        standrad_wish_four_star_selecter->setItemText(21, QCoreApplication::translate("MainWindow", "yanfei", nullptr));
        standrad_wish_four_star_selecter->setItemText(22, QCoreApplication::translate("MainWindow", "yunjin", nullptr));
        standrad_wish_four_star_selecter->setItemText(23, QCoreApplication::translate("MainWindow", "the_flute", nullptr));
        standrad_wish_four_star_selecter->setItemText(24, QCoreApplication::translate("MainWindow", "sacrificial_sword", nullptr));
        standrad_wish_four_star_selecter->setItemText(25, QCoreApplication::translate("MainWindow", "lions_roar", nullptr));
        standrad_wish_four_star_selecter->setItemText(26, QCoreApplication::translate("MainWindow", "the_bell", nullptr));
        standrad_wish_four_star_selecter->setItemText(27, QCoreApplication::translate("MainWindow", "rainslasher", nullptr));
        standrad_wish_four_star_selecter->setItemText(28, QCoreApplication::translate("MainWindow", "sacrificial_greatsword", nullptr));
        standrad_wish_four_star_selecter->setItemText(29, QCoreApplication::translate("MainWindow", "favonius_sword", nullptr));
        standrad_wish_four_star_selecter->setItemText(30, QCoreApplication::translate("MainWindow", "sacrificial_bow", nullptr));
        standrad_wish_four_star_selecter->setItemText(31, QCoreApplication::translate("MainWindow", "the_stringless", nullptr));
        standrad_wish_four_star_selecter->setItemText(32, QCoreApplication::translate("MainWindow", "rust", nullptr));
        standrad_wish_four_star_selecter->setItemText(33, QCoreApplication::translate("MainWindow", "favonius_codex", nullptr));
        standrad_wish_four_star_selecter->setItemText(34, QCoreApplication::translate("MainWindow", "sacrifical_fragments", nullptr));
        standrad_wish_four_star_selecter->setItemText(35, QCoreApplication::translate("MainWindow", "eye_of_preception", nullptr));
        standrad_wish_four_star_selecter->setItemText(36, QCoreApplication::translate("MainWindow", "favonius_warbow", nullptr));
        standrad_wish_four_star_selecter->setItemText(37, QCoreApplication::translate("MainWindow", "the_widsith", nullptr));
        standrad_wish_four_star_selecter->setItemText(38, QCoreApplication::translate("MainWindow", "sacrificial_lance", nullptr));
        standrad_wish_four_star_selecter->setItemText(39, QCoreApplication::translate("MainWindow", "dragons_bane", nullptr));

        instruction_7->setText(QCoreApplication::translate("MainWindow", "5*:", nullptr));
        report_three_star_for_standard_wish->setText(QCoreApplication::translate("MainWindow", "3*", nullptr));
        wishtype_selecter->setTabText(wishtype_selecter->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Standard Wish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
