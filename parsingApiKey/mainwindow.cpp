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


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    webviewDialog = new QDialog(this);
    webviewDialog->setLayout(new QBoxLayout(QBoxLayout::LeftToRight));
    webviewDialog->setAttribute(Qt::WA_QuitOnClose,false);
    webView = new QWebView(webviewDialog);
    webviewDialog->layout()->addWidget(webView);
    webviewDialog->layout()->setMargin(0);
    // connect(webView, SIGNAL(loadFinished(bool)), this, SLOT(onWebviewLoaded()));




}

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

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QUrl url("https://ivle.nus.edu.sg/LAPI/default.aspx");
    /* Code on the webpage is
     * <html>
     * <head></head>
     * <body>
     *      <p>HelloWorld</p>/
     *      <p>TESTCODE</p>
     * </body>
     * </html>
    */


    webView->setUrl(url);
    connect(webView, SIGNAL(loadFinished(bool)), SLOT(parse(bool)));
}

void MainWindow::on_pushButton_2_clicked()
{
    if (true){
    webView->setUrl(QString("https://ivle.nus.edu.sg/LAPI/default.aspx").arg("EaLNhIs72xzNhdl9ai6Tr"));
    //webviewDialog->setWindowModality(Qt::ApplicationModal);
    //setting modality cause the cursor to disappear in textbox...
    webviewDialog->show();

    } else {

    }

    //s->show();
}


void MainWindow::parse(bool)
{
    QWebFrame *frameInner = webView->page()->mainFrame();
    QWebElement doc = frameInner->documentElement();
//    QWebElement body = doc.firstChild();
//    QWebElement firstParagraph =doc.firstChild();
//    QWebElement secondParagraph = firstParagraph.nextSibling();
//    QString storedText = firstParagraph.toPlainText();
//    QString text = secondParagraph.toPlainText();
//    qDebug()<<QString(storedText);
//    qDebug()<<secondParagraph.toPlainText();
    QWebElement key = doc.findFirst("b");//next step to figure out how to log in into ivle
   // qDebug()<< QString(key.toPlainText());
    APIKEY = key.toPlainText();
 // qDebug()<<QString("APIKEY is ");
  //qDebug()<< QString(APIKEY);
   // webView->setUrl(QString("https://ivle.nus.edu.sg/api/login/?apikey=%1").arg(APIKEY));
    //webviewDialog->setWindowModality(Qt::ApplicationModal);
    //setting modality cause the cursor to disappear in textbox...
    // webviewDialog->show();
    SetMyValue("KEY",APIKEY);
    qDebug()<<GetMyValue("KEY","Does not exist");

}


void MainWindow::on_pushButton_3_clicked()
{

    //qDebug()<<GetMyValue("KEY","Does not exist");
    QString keys=GetMyValue("KEY","h").toString();
    qDebug()<<keys;
}
