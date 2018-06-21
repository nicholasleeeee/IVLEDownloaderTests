/********************************************************************************
** Form generated from reading UI file 'advanceddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDDIALOG_H
#define UI_ADVANCEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdvancedDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AdvancedDialog)
    {
        if (AdvancedDialog->objectName().isEmpty())
            AdvancedDialog->setObjectName(QStringLiteral("AdvancedDialog"));
        AdvancedDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(AdvancedDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AdvancedDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(AdvancedDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(AdvancedDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(AdvancedDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AdvancedDialog);

        QMetaObject::connectSlotsByName(AdvancedDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvancedDialog)
    {
        AdvancedDialog->setWindowTitle(QApplication::translate("AdvancedDialog", "Dialog", 0));
        label->setText(QApplication::translate("AdvancedDialog", "The following is the json used to fetch and parse external pages and merge into your ivle folder. You can just check update, or modify it yourself if you are pro.", 0));
        pushButton->setText(QApplication::translate("AdvancedDialog", "Check update", 0));
        pushButton_2->setText(QApplication::translate("AdvancedDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AdvancedDialog: public Ui_AdvancedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDDIALOG_H
