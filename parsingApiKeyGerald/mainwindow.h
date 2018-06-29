#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWebView>
#include <QDialog>
#include <QMainWindow>
#include "secondscreen.h"
#include "ui_secondscreen.h"
#include <QtWebKitWidgets>
#include <QtWidgets>
#include <QFileDialog>
#include <QCheckBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_pushButton_clicked();
    void parse(bool);

    QSettings* InitRegSettings();
    void SetMyValue(QString key, QVariant value);
    QVariant GetMyValue(QString key, QVariant defaultValue);

    void on_pushButton_2_clicked();



    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QWebView *innerPage = new QWebView();
    SecondScreen *s =new SecondScreen();
    QWebView* webView;
    QDialog* webviewDialog;
    QString m_sSettingsFile;
   };

#endif // MAINWINDOW_H
