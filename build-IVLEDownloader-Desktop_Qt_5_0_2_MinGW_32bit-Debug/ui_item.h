/********************************************************************************
** Form generated from reading UI file 'item.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEM_H
#define UI_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Item
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QPushButton *pushButton;

    void setupUi(QWidget *Item)
    {
        if (Item->objectName().isEmpty())
            Item->setObjectName(QStringLiteral("Item"));
        Item->resize(478, 89);
        horizontalLayout = new QHBoxLayout(Item);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Item);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(Item);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        progressBar = new QProgressBar(Item);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        pushButton = new QPushButton(Item);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Item);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Item);
    } // setupUi

    void retranslateUi(QWidget *Item)
    {
        Item->setWindowTitle(QApplication::translate("Item", "Form", 0));
        label->setText(QApplication::translate("Item", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Item", "Completed!", 0));
    } // retranslateUi

};

namespace Ui {
    class Item: public Ui_Item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEM_H
