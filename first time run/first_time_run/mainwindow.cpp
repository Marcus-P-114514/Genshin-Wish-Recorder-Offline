#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QProcess"
#include "QSettings"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Hide tabs
    ui->frame->setTabVisible(0,false);
    ui->frame->setTabVisible(1,false);
    ui->frame->setTabVisible(2,false);
    ui->frame->setTabVisible(3,false);
    ui->frame->setTabVisible(4,false);
    ui->frame->setTabVisible(5,false);
    ui->frame->setTabVisible(6,false);
    ui->frame->setTabVisible(7,false);

    //Set Index
    ui->frame->setCurrentIndex(0);

    //List avaliable avatars
    ui->avatar_selecter->addItem("albedo");
    ui->avatar_selecter->addItem("aloy");
    ui->avatar_selecter->addItem("amber");
    ui->avatar_selecter->addItem("arataki_itto");
    ui->avatar_selecter->addItem("barbara");
    ui->avatar_selecter->addItem("beidou");
    ui->avatar_selecter->addItem("bennett");
    ui->avatar_selecter->addItem("chongyun");
    ui->avatar_selecter->addItem("diona");
    ui->avatar_selecter->addItem("dluic");
    ui->avatar_selecter->addItem("eula");
    ui->avatar_selecter->addItem("fischl");
    ui->avatar_selecter->addItem("ganyu");
    ui->avatar_selecter->addItem("gorou");
    ui->avatar_selecter->addItem("hutao");
    ui->avatar_selecter->addItem("jean");
    ui->avatar_selecter->addItem("kaedehara_kazuha");
    ui->avatar_selecter->addItem("kaeya");
    ui->avatar_selecter->addItem("kamisato_ayaka");
    ui->avatar_selecter->addItem("kamisato_ayato");
    ui->avatar_selecter->addItem("keqing");
    ui->avatar_selecter->addItem("kijou_sara");
    ui->avatar_selecter->addItem("klee");
    ui->avatar_selecter->addItem("lisa");
    ui->avatar_selecter->addItem("mona");
    ui->avatar_selecter->addItem("ningguang");
    ui->avatar_selecter->addItem("noelle");
    ui->avatar_selecter->addItem("qiqi");
    ui->avatar_selecter->addItem("raiden_shogun");
    ui->avatar_selecter->addItem("razor");
    ui->avatar_selecter->addItem("rosaria");
    ui->avatar_selecter->addItem("sangonomiya_kokomi");
    ui->avatar_selecter->addItem("sayu");
    ui->avatar_selecter->addItem("shenhe");
    ui->avatar_selecter->addItem("sucrose");
    ui->avatar_selecter->addItem("tartaglia");
    ui->avatar_selecter->addItem("thoma");
    ui->avatar_selecter->addItem("venti");
    ui->avatar_selecter->addItem("albedo");
    ui->avatar_selecter->addItem("xiangling");
    ui->avatar_selecter->addItem("xiao");
    ui->avatar_selecter->addItem("xingqiu");
    ui->avatar_selecter->addItem("xinyan");
    ui->avatar_selecter->addItem("yae_miko");
    ui->avatar_selecter->addItem("yanfei");
    ui->avatar_selecter->addItem("yoimiya");
    ui->avatar_selecter->addItem("yun_jin");
    ui->avatar_selecter->addItem("zhongli");

    //Write fallback of avatar
    QSettings *avatar_fallback = new QSettings("./profile/user/info.ini", QSettings::IniFormat);
    avatar_fallback->setValue( "basic/avatar","unknown");

    //Close function
    delete avatar_fallback;

}

MainWindow::~MainWindow()
{
    delete ui;
}




//Back & Next buttons
void MainWindow::on_next_page_from_page_one_button_clicked()
{
    ui->frame->setCurrentIndex(1);
}


void MainWindow::on_next_page_from_page_two_button_clicked()
{
    ui->frame->setCurrentIndex(2);
}


void MainWindow::on_previous_page_from_page_two_button_clicked()
{
    ui->frame->setCurrentIndex(0);
}


void MainWindow::on_previous_page_from_page_three_button_clicked()
{
    ui->frame->setCurrentIndex(1);
}


void MainWindow::on_next_page_from_page_three_button_clicked()
{
    //Read input
    QString username_input=ui->input_username->text();
    QString user_id_input=ui->input_uid->text();
    QString user_signature_input=ui->input_signature->text();

    //Write information
    QSettings *write_user_info = new QSettings("./profile/user/info.ini", QSettings::IniFormat);
    write_user_info->setValue( "basic/username",username_input);
    write_user_info->setValue( "basic/uid",user_id_input);
    write_user_info->setValue( "basic/signature",user_signature_input);

    //Close function
    delete write_user_info;

    //Jump to next section
    ui->frame->setCurrentIndex(3);

}


void MainWindow::on_previous_page_from_page_four_button_clicked()
{
    ui->frame->setCurrentIndex(2);
}


void MainWindow::on_next_page_from_page_four_button_clicked()
{
    //Write avatar prefrence
    QString avatar_selected=ui->avatar_selecter->currentText();
    QSettings *avatar_write = new QSettings("./profile/user/info.ini", QSettings::IniFormat);
    avatar_write->setValue( "basic/avatar",avatar_selected);

    //Close function
    delete avatar_write;

    //Jump to next section
    ui->frame->setCurrentIndex(4);

    //Open Wish Record Updater
    QProcess::startDetached( "wish-updater.exe" ,QStringList());
}


void MainWindow::on_previous_page_from_page_five_button_clicked()
{
    ui->frame->setCurrentIndex(3);
}


void MainWindow::on_next_page_from_page_five_button_clicked()
{
    ui->frame->setCurrentIndex(5);
}


void MainWindow::on_previous_page_from_page_six_button_clicked()
{
    ui->frame->setCurrentIndex(4);
}


void MainWindow::on_next_page_from_page_six_button_clicked()
{
    //Write the file
    QSettings *write_seted_up = new QSettings("./profile/shared/extra.ini", QSettings::IniFormat);
    write_seted_up->setValue( "first_time_run/value","n");

    //Close function
    delete write_seted_up;

    //Reopen main Program
    QProcess::startDetached( "wish-recorder.exe" ,QStringList());

    //Exit Wizard
    QApplication *exit_setup_wizard = nullptr;
    exit_setup_wizard->exit(0);
}



//Avatar preview button
void MainWindow::on_preview_avatar_clicked()
{
    //Get selected avatar
    QString avatar_preview_target=ui->avatar_selecter->currentText();
    QString avatar_stylesheet="border-image: url(:/avatar/resources/rounded/"+avatar_preview_target+"_256px.png)";
    ui->user_avatar_preview->setStyleSheet(NULL);
    ui->user_avatar_preview->setStyleSheet(avatar_stylesheet);
}

