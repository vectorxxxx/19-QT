/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QPlainTextEdit *receiveEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *ipEdit;
    QLabel *label_2;
    QLineEdit *portEdit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *openBt;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(685, 532);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        verticalLayout->addWidget(groupBox);

        receiveEdit = new QPlainTextEdit(Widget);
        receiveEdit->setObjectName(QStringLiteral("receiveEdit"));
        receiveEdit->setReadOnly(true);

        verticalLayout->addWidget(receiveEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        ipEdit = new QLineEdit(Widget);
        ipEdit->setObjectName(QStringLiteral("ipEdit"));

        horizontalLayout_2->addWidget(ipEdit);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        portEdit = new QLineEdit(Widget);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        horizontalLayout_2->addWidget(portEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));

        verticalLayout->addWidget(groupBox_2);

        sendEdit = new QLineEdit(Widget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));

        verticalLayout->addWidget(sendEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openBt = new QPushButton(Widget);
        openBt->setObjectName(QStringLiteral("openBt"));

        horizontalLayout->addWidget(openBt);

        closeBt = new QPushButton(Widget);
        closeBt->setObjectName(QStringLiteral("closeBt"));

        horizontalLayout->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sendBt = new QPushButton(Widget);
        sendBt->setObjectName(QStringLiteral("sendBt"));

        horizontalLayout->addWidget(sendBt);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label->setText(QApplication::translate("Widget", "IP", nullptr));
        label_2->setText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        portEdit->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\345\256\242\346\210\267\347\253\257", nullptr));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\345\256\242\346\210\267\347\253\257", nullptr));
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
