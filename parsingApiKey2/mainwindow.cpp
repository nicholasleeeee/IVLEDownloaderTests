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

//Constructor that creates a webviewDialog
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

    if (GetMyValue("KEY","NULL")=="NULL"){
            qDebug()<<QString("HELLO");
            getAPIkey();
            ivleLoginPage();
            qDebug()<<GetMyValue("KEY","Does not exist");
            QString keys=GetMyValue("KEY","h").toString();
            qDebug()<<keys;


    } else {
        QString keys=GetMyValue("KEY","h").toString();
        qDebug()<<keys;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Brings out login page
void MainWindow::ivleLoginPage()
{

    webView->setUrl(QString("https://ivle.nus.edu.sg/LAPI/default.aspx").arg("EaLNhIs72xzNhdl9ai6Tr"));
    webviewDialog->show();

}

// Navigates to the page that creates an APIKEY based on each user
void MainWindow::getAPIkey()
{
    QUrl url("https://ivle.nus.edu.sg/LAPI/default.aspx");//url to obtain the APIKEY
    webView->setUrl(url);
    //Signals and slot function that ensures that the webpage is loaded finish before executing the parse function
    connect(webView, SIGNAL(loadFinished(bool)), SLOT(parse(bool)));
}

//Parsing function that uses QSettings,QWebView,QWebFrame and QWebElement to extract the APIKEY from parsing HTML code on the webpage that generates the APIKEY
void MainWindow::parse(bool){
    QWebFrame *frameInner = webView->page()->mainFrame();
    QWebElement doc = frameInner->documentElement();
    QWebElement key = doc.findFirst("b");//function to find the first element in the HTML tag <b>
    APIKEY = key.toPlainText();
    SetMyValue("KEY",APIKEY);
    qDebug()<<GetMyValue("KEY","Does not exist");
    QString keys=GetMyValue("KEY","h").toString();
    qDebug()<<keys;
}

//A collection of functions that use QSettings to store settings variables. This stores settings in the registry of the computer and hence permanent even after the app is closed
QSettings* MainWindow:: InitRegSettings()
{
    QSettings* regSett;
    regSett = new QSettings("Organization-name","Project-name");
    return regSett;
}
void MainWindow::SetMyValue(QString key, QVariant value)
{
    InitRegSettings()->setValue(key,value); //Store value of key defined by user
}
    QVariant MainWindow:: GetMyValue(QString key, QVariant defaultValue)
{
    return InitRegSettings()->value(key,defaultValue);//Get value of a key-value pair
}

//Set apikey to null
void MainWindow::on_pushButton_3_clicked()
{
   SetMyValue("KEY","NULL");
}

//Print global variable APIKEY
void MainWindow::on_pushButton_4_clicked()
{
    QString keys=GetMyValue("KEY","h").toString();
    qDebug()<<keys;
}








