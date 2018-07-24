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
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *nouse1;
    QWidget *y;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_8;
    QTableWidget *tableWidget_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *tab_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget_4;
    QWidget *tab_4;
    QWebView *webView_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_forgetMe;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QWebView *webView;

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
        treeView->setProperty("showDropIndicator", QVariant(true));
        treeView->setDragEnabled(true);
        treeView->setDragDropOverwriteMode(false);
        treeView->setAnimated(true);
        treeView->setWordWrap(false);
        treeView->setExpandsOnDoubleClick(true);
        treeView->header()->setCascadingSectionResizes(true);
        treeView->header()->setDefaultSectionSize(250);
        treeView->header()->setMinimumSectionSize(100);

        horizontalLayout->addWidget(treeView);

        listView = new QListView(tab);
        listView->setObjectName(QStringLiteral("listView"));

        horizontalLayout->addWidget(listView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        nouse1 = new QWidget();
        nouse1->setObjectName(QStringLiteral("nouse1"));
        tabWidget_2->addTab(nouse1, QString());
        y = new QWidget();
        y->setObjectName(QStringLiteral("y"));
        tabWidget_2->addTab(y, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_8 = new QHBoxLayout(tab_3);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tableWidget_2 = new QTableWidget(tab_3);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(tableWidget_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));

        verticalLayout_9->addLayout(verticalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_9);

        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayout_4 = new QHBoxLayout(tab_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tableWidget = new QTableWidget(tab_6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(tab_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(tab_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(tab_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        tableWidget_3 = new QTableWidget(tab_6);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_3->rowCount() < 11)
            tableWidget_3->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget_3->setItem(0, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_3->setItem(3, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_3->setItem(3, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_3->setItem(4, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_3->setItem(4, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_3->setItem(5, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_3->setItem(5, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setItem(6, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_3->setItem(6, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setItem(7, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setItem(7, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setItem(8, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setItem(8, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setItem(9, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setItem(9, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setItem(10, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setItem(10, 1, __qtablewidgetitem34);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        sizePolicy1.setHeightForWidth(tableWidget_3->sizePolicy().hasHeightForWidth());
        tableWidget_3->setSizePolicy(sizePolicy1);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget_3->verticalHeader()->setDefaultSectionSize(20);
        tableWidget_3->verticalHeader()->setMinimumSectionSize(30);

        gridLayout->addWidget(tableWidget_3, 1, 0, 1, 1);

        tableWidget_4 = new QTableWidget(tab_6);
        if (tableWidget_4->columnCount() < 2)
            tableWidget_4->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem36);
        if (tableWidget_4->rowCount() < 5)
            tableWidget_4->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_4->setItem(0, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_4->setItem(0, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_4->setItem(1, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_4->setItem(1, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_4->setItem(2, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_4->setItem(2, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_4->setItem(3, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_4->setItem(3, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_4->setItem(4, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_4->setItem(4, 1, __qtablewidgetitem51);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_4->sizePolicy().hasHeightForWidth());
        tableWidget_4->setSizePolicy(sizePolicy2);
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(290);

        gridLayout->addWidget(tableWidget_4, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);

        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        webView_2 = new QWebView(tab_4);
        webView_2->setObjectName(QStringLiteral("webView_2"));
        webView_2->setGeometry(QRect(9, 26, 1158, 621));
        sizePolicy1.setHeightForWidth(webView_2->sizePolicy().hasHeightForWidth());
        webView_2->setSizePolicy(sizePolicy1);
        webView_2->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 100, 471, 231));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 371, 131));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout_3->addWidget(lineEdit_username);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(lineEdit_password);


        verticalLayout_4->addLayout(horizontalLayout_6);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        verticalLayout_4->addWidget(pushButton_login);

        pushButton_forgetMe = new QPushButton(tab_4);
        pushButton_forgetMe->setObjectName(QStringLiteral("pushButton_forgetMe"));
        pushButton_forgetMe->setGeometry(QRect(0, 0, 91, 23));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        webView = new QWebView(tab_5);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));

        verticalLayout_3->addWidget(webView);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(DownloaderUI);

        tabWidget->setCurrentIndex(4);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DownloaderUI);
    } // setupUi

    void retranslateUi(QDialog *DownloaderUI)
    {
        DownloaderUI->setWindowTitle(QApplication::translate("DownloaderUI", "IVLE Downloader", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DownloaderUI", "Files", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(nouse1), QApplication::translate("DownloaderUI", "Tab 1", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(y), QApplication::translate("DownloaderUI", "Tab 2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DownloaderUI", "Announcements", 0));
        pushButton_6->setText(QApplication::translate("DownloaderUI", "Add Item", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DownloaderUI", "Exam Details", 0));
        pushButton_2->setText(QApplication::translate("DownloaderUI", "Calculate CAP", 0));
        pushButton_5->setText(QApplication::translate("DownloaderUI", "CAP Goals", 0));
        pushButton_3->setText(QApplication::translate("DownloaderUI", "Clear", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DownloaderUI", "Alphabetical Grade", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DownloaderUI", "Score", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("DownloaderUI", "1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("DownloaderUI", "2", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("DownloaderUI", "3", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("DownloaderUI", "4", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("DownloaderUI", "5", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("DownloaderUI", "6", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("DownloaderUI", "7", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("DownloaderUI", "8", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("DownloaderUI", "9", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("DownloaderUI", "10", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("DownloaderUI", "11", 0));

        const bool __sortingEnabled = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("DownloaderUI", "A+", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->item(0, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("DownloaderUI", "5.0", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->item(1, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("DownloaderUI", "A", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->item(1, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("DownloaderUI", "5.0", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->item(2, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("DownloaderUI", "A-", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->item(2, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("DownloaderUI", "4.5", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->item(3, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("DownloaderUI", "B+", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->item(3, 1);
        ___qtablewidgetitem20->setText(QApplication::translate("DownloaderUI", "4.0", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->item(4, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("DownloaderUI", "B", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->item(4, 1);
        ___qtablewidgetitem22->setText(QApplication::translate("DownloaderUI", "3.5", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_3->item(5, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("DownloaderUI", "B-", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_3->item(5, 1);
        ___qtablewidgetitem24->setText(QApplication::translate("DownloaderUI", "3.0", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->item(6, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("DownloaderUI", "C+", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->item(6, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("DownloaderUI", "2.5", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->item(7, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("DownloaderUI", "C", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_3->item(7, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("DownloaderUI", "2.0", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->item(8, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("DownloaderUI", "D+", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->item(8, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("DownloaderUI", "1.5", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->item(9, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("DownloaderUI", "D", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->item(9, 1);
        ___qtablewidgetitem32->setText(QApplication::translate("DownloaderUI", "1.0", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->item(10, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("DownloaderUI", "F", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_3->item(10, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("DownloaderUI", "0", 0));
        tableWidget_3->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem35->setText(QApplication::translate("DownloaderUI", "HONOURS DEGREE CLASSIFICATION", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem36->setText(QApplication::translate("DownloaderUI", "	CAP CUT-OFFS", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem37->setText(QApplication::translate("DownloaderUI", "1", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem38->setText(QApplication::translate("DownloaderUI", "2", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_4->verticalHeaderItem(2);
        ___qtablewidgetitem39->setText(QApplication::translate("DownloaderUI", "3", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_4->verticalHeaderItem(3);
        ___qtablewidgetitem40->setText(QApplication::translate("DownloaderUI", "4", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_4->verticalHeaderItem(4);
        ___qtablewidgetitem41->setText(QApplication::translate("DownloaderUI", "5", 0));

        const bool __sortingEnabled1 = tableWidget_4->isSortingEnabled();
        tableWidget_4->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_4->item(0, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("DownloaderUI", "Honours (Highest Distinction) / First Class Honours", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_4->item(0, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("DownloaderUI", ">4.50", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_4->item(1, 0);
        ___qtablewidgetitem44->setText(QApplication::translate("DownloaderUI", "Honours (Distinction) / Second Upper Class", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_4->item(1, 1);
        ___qtablewidgetitem45->setText(QApplication::translate("DownloaderUI", "4.00 \342\200\223 4.49", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_4->item(2, 0);
        ___qtablewidgetitem46->setText(QApplication::translate("DownloaderUI", "Honours (Merit) / Second Lower Honours", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_4->item(2, 1);
        ___qtablewidgetitem47->setText(QApplication::translate("DownloaderUI", "3.50 \342\200\223 3.99", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_4->item(3, 0);
        ___qtablewidgetitem48->setText(QApplication::translate("DownloaderUI", "Honours / Third Class Honours", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_4->item(3, 1);
        ___qtablewidgetitem49->setText(QApplication::translate("DownloaderUI", "3.00 \342\200\223 3.49", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_4->item(4, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("DownloaderUI", "Pass", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_4->item(4, 1);
        ___qtablewidgetitem51->setText(QApplication::translate("DownloaderUI", "2.00 \342\200\223 2.99", 0));
        tableWidget_4->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("DownloaderUI", "CAP Calculator", 0));
        groupBox->setTitle(QApplication::translate("DownloaderUI", "Sign In", 0));
        label->setText(QApplication::translate("DownloaderUI", "Username", 0));
        label_2->setText(QApplication::translate("DownloaderUI", "Password", 0));
        pushButton_login->setText(QApplication::translate("DownloaderUI", "Login", 0));
        pushButton_forgetMe->setText(QApplication::translate("DownloaderUI", "Signout / Reset", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("DownloaderUI", "Outlook", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("DownloaderUI", "NUSWhispers", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloaderUI: public Ui_DownloaderUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADERUI_H
