#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString sPath="D:/";
    dirmodel = new QFileSystemModel (this);
    dirmodel->index(QDir::currentPath());
    ui->treeView->setModel((dirmodel));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("D:/Desktop/Testing.docx"));
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
     QDesktopServices::openUrl(QUrl::fromLocalFile("D:/Desktop/CP2106"));
}
