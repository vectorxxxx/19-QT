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
    QHBoxLayout *horizontalLayout;
    QLineEdit *portEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *openBt;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(570, 486);
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        portEdit = new QLineEdit(Widget);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        horizontalLayout->addWidget(portEdit);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));

        verticalLayout->addWidget(groupBox_2);

        sendEdit = new QLineEdit(Widget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));

        verticalLayout->addWidget(sendEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        openBt = new QPushButton(Widget);
        openBt->setObjectName(QStringLiteral("openBt"));

        horizontalLayout_2->addWidget(openBt);

        closeBt = new QPushButton(Widget);
        closeBt->setObjectName(QStringLiteral("closeBt"));

        horizontalLayout_2->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sendBt = new QPushButton(Widget);
        sendBt->setObjectName(QStringLiteral("sendBt"));

        horizontalLayout_2->addWidget(sendBt);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label->setText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
