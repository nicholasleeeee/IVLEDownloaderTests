//The file that shows all the variables and methods used in the class MainWindow, the window that pops up when the code is first executed. This class is called in main.cpp and an object is created.
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globalvar.h"
#include <QWebElement>
#include <QtWebKit>
#include <QDebug>
#include <QWebFrame>
#include <QUrl>
#include <QWebView>
#include <QWebPage>
#include <QtNetwork>
#include <QDialog>
#include <QApplication>
#include <QSettings>
#include <QCoreApplication>

//Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // webviewDialog for ivle login page
    webviewDialog = new QDialog(this);// an object that is shown in the UI, code below will set the settings of the Dialog box seen
    webviewDialog->setLayout(new QBoxLayout(QBoxLayout::LeftToRight));
    webviewDialog->setAttribute(Qt::WA_QuitOnClose,false);
    webView = new QWebView(webviewDialog);
    webviewDialog->layout()->addWidget(webView);
    webviewDialog->layout()->setMargin(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Brings out login page
void MainWindow::on_pushButton_clicked()
{
    if (APIKEY==" "){
    webView->setUrl(QString("https://ivle.nus.edu.sg/LAPI/default.aspx").arg("EaLNhIs72xzNhdl9ai6Tr"));
    webviewDialog->show();
    }
}

// Enters link to print API key in parse function
void MainWindow::on_pushButton_2_clicked()
{
    QUrl url("https://ivle.nus.edu.sg/LAPI/default.aspx");
    webView->setUrl(url);
    connect(webView, SIGNAL(loadFinished(bool)), SLOT(parse(bool)));
}

//From pushButton_2 function
void MainWindow::parse(bool){
    QWebFrame *frameInner = webView->page()->mainFrame();
    QWebElement doc = frameInner->documentElement();
    QWebElement key = doc.findFirst("b");
    APIKEY = key.toPlainText();
    SetMyValue("KEY",APIKEY);
    qDebug()<<GetMyValue("KEY","Does not exist");
    QString keys=GetMyValue("KEY","h").toString();
    qDebug()<<keys;
}

//Settings to store API from USER
QSettings* MainWindow:: InitRegSettings()
{
QSettings* regSett;
regSett = new QSettings("Organization-name","Project-name");
return regSett;
}
void MainWindow::SetMyValue(QString key, QVariant value)
{
InitRegSettings()->setValue(key,value); //Store value of user
}
QVariant MainWindow:: GetMyValue(QString key, QVariant defaultValue)
{
return InitRegSettings()->value(key,defaultValue);//Get value of user
}

//Set apikey to null
void MainWindow::on_pushButton_3_clicked()
{
    APIKEY = " ";
}

//Print apikey
void MainWindow::on_pushButton_4_clicked()
{
    qDebug()<<APIKEY;
}








