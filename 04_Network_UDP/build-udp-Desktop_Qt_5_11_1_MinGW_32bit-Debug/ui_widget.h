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
    QLineEdit *localPort;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *aimPort;
    QLabel *label_3;
    QLineEdit *aimIP;
    QGroupBox *groupBox_2;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *openBt;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(526, 426);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 231));
        receiveEdit = new QPlainTextEdit(groupBox);
        receiveEdit->setObjectName(QStringLiteral("receiveEdit"));
        receiveEdit->setGeometry(QRect(10, 30, 701, 191));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(receiveEdit->sizePolicy().hasHeightForWidth());
        receiveEdit->setSizePolicy(sizePolicy1);
        receiveEdit->setReadOnly(true);

        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        localPort = new QLineEdit(Widget);
        localPort->setObjectName(QStringLiteral("localPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(localPort->sizePolicy().hasHeightForWidth());
        localPort->setSizePolicy(sizePolicy2);
        localPort->setMinimumSize(QSize(180, 0));

        horizontalLayout_2->addWidget(localPort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        aimPort = new QLineEdit(Widget);
        aimPort->setObjectName(QStringLiteral("aimPort"));
        sizePolicy2.setHeightForWidth(aimPort->sizePolicy().hasHeightForWidth());
        aimPort->setSizePolicy(sizePolicy2);
        aimPort->setMinimumSize(QSize(180, 0));

        horizontalLayout_3->addWidget(aimPort);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        aimIP = new QLineEdit(Widget);
        aimIP->setObjectName(QStringLiteral("aimIP"));

        horizontalLayout_3->addWidget(aimIP);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 81));
        sendEdit = new QLineEdit(groupBox_2);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        sendEdit->setGeometry(QRect(10, 31, 691, 41));

        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openBt = new QPushButton(Widget);
        openBt->setObjectName(QStringLiteral("openBt"));

        horizontalLayout->addWidget(openBt);

        closeBt = new QPushButton(Widget);
        closeBt->setObjectName(QStringLiteral("closeBt"));

        horizontalLayout->addWidget(closeBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\346\241\206", nullptr));
        label->setText(QApplication::translate("Widget", "\346\234\254\346\234\272\347\253\257\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Widget", "\347\233\256\346\240\207\347\253\257\345\217\243", nullptr));
        label_3->setText(QApplication::translate("Widget", "\347\233\256\346\240\207IP", nullptr));
        aimIP->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\346\241\206", nullptr));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\350\277\236\346\216\245", nullptr));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\350\277\236\346\216\245", nullptr));
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
