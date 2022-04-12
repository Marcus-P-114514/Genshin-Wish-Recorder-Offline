/********************************************************************************
** Form generated from reading UI file 'license.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSE_H
#define UI_LICENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_license
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QDialog *license)
    {
        if (license->objectName().isEmpty())
            license->setObjectName(QString::fromUtf8("license"));
        license->resize(877, 621);
        tabWidget = new QTabWidget(license);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(170, 180, 561, 251));
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(license);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(license);
    } // setupUi

    void retranslateUi(QDialog *license)
    {
        license->setWindowTitle(QCoreApplication::translate("license", "Dialog", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("license", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("license", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class license: public Ui_license {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSE_H
