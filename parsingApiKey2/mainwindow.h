#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKit>
#include <QtWebKitWidgets>
#include <QFileDialog>
#include <QCheckBox>
#include <QtWidgets>
#include <QString>
#include <QVariant>
#include <QSettings>


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
    void ivleLoginPage();
    void getAPIkey();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void parse(bool);

    QSettings* InitRegSettings();
    void SetMyValue(QString key, QVariant value);
    QVariant GetMyValue(QString key, QVariant defaultValue);




private:
    Ui::MainWindow *ui;
    QWebView* webView;
    QDialog* webviewDialog;

};

#endif // MAINWINDOW_H
