/********************************************************************************
** Form generated from reading UI file 'downloaderui.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADERUI_H
#define UI_DOWNLOADERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloaderUI
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QListView *listView;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QDialog *DownloaderUI)
    {
        if (DownloaderUI->objectName().isEmpty())
            DownloaderUI->setObjectName(QStringLiteral("DownloaderUI"));
        DownloaderUI->resize(1200, 700);
        verticalLayout = new QVBoxLayout(DownloaderUI);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(DownloaderUI);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(tab);
        treeView->setObjectName(QStringLiteral("treeView"));

        horizontalLayout->addWidget(treeView);

        listView = new QListView(tab);
        listView->setObjectName(QStringLiteral("listView"));

        horizontalLayout->addWidget(listView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(DownloaderUI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DownloaderUI);
    } // setupUi

    void retranslateUi(QDialog *DownloaderUI)
    {
        DownloaderUI->setWindowTitle(QApplication::translate("DownloaderUI", "IVLE Downloader", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DownloaderUI", "Files", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DownloaderUI", "Announcements", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DownloaderUI", "Exam Details", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloaderUI: public Ui_DownloaderUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADERUI_H
