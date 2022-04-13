#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_next_page_from_page_one_button_clicked();

    void on_next_page_from_page_two_button_clicked();

    void on_previous_page_from_page_two_button_clicked();

    void on_previous_page_from_page_three_button_clicked();

    void on_next_page_from_page_three_button_clicked();

    void on_previous_page_from_page_four_button_clicked();

    void on_next_page_from_page_four_button_clicked();

    void on_previous_page_from_page_five_button_clicked();

    void on_next_page_from_page_five_button_clicked();

    void on_previous_page_from_page_six_button_clicked();

    void on_next_page_from_page_six_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
