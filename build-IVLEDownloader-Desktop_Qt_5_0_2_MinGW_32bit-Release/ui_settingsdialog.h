/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QCheckBox *notifyCheckBox;
    QCheckBox *notifyAnmCheckBox;
    QCheckBox *igUpCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->setWindowModality(Qt::NonModal);
        SettingsDialog->resize(400, 314);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SettingsDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(SettingsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setAutoDefault(false);

        verticalLayout->addWidget(pushButton);

        label_2 = new QLabel(SettingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_2);

        pushButton_2 = new QPushButton(SettingsDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setAutoDefault(false);

        verticalLayout->addWidget(pushButton_2);

        notifyCheckBox = new QCheckBox(SettingsDialog);
        notifyCheckBox->setObjectName(QStringLiteral("notifyCheckBox"));

        verticalLayout->addWidget(notifyCheckBox);

        notifyAnmCheckBox = new QCheckBox(SettingsDialog);
        notifyAnmCheckBox->setObjectName(QStringLiteral("notifyAnmCheckBox"));

        verticalLayout->addWidget(notifyAnmCheckBox);

        igUpCheckBox = new QCheckBox(SettingsDialog);
        igUpCheckBox->setObjectName(QStringLiteral("igUpCheckBox"));

        verticalLayout->addWidget(igUpCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(SettingsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spinBox = new QSpinBox(SettingsDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(10);
        spinBox->setMaximum(200);
        spinBox->setSingleStep(5);
        spinBox->setValue(50);

        horizontalLayout_2->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(SettingsDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(SettingsDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", 0));
        label->setText(QApplication::translate("SettingsDialog", "You need to login.", 0));
        pushButton->setText(QApplication::translate("SettingsDialog", "Login", 0));
        label_2->setText(QApplication::translate("SettingsDialog", "You need to set a destination for downloaded files.", 0));
        pushButton_2->setText(QApplication::translate("SettingsDialog", "Change Download Directory", 0));
        notifyCheckBox->setText(QApplication::translate("SettingsDialog", "Notify me when new files are downloaded.", 0));
        notifyAnmCheckBox->setText(QApplication::translate("SettingsDialog", "Notify me when there are new unread announcements", 0));
        igUpCheckBox->setText(QApplication::translate("SettingsDialog", "Ignore uploadable folders", 0));
        label_3->setText(QApplication::translate("SettingsDialog", "Do not download files larger than", 0));
        spinBox->setSuffix(QApplication::translate("SettingsDialog", "mb", 0));
        label_4->setText(QApplication::translate("SettingsDialog", "Note that files that are already downloaded will not be deleted - you will have to do this yourself", 0));
        pushButton_3->setText(QApplication::translate("SettingsDialog", "Extremely hacky advance stuff", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
