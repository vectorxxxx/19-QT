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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *showCurrentDateTime;
    QSpacerItem *horizontalSpacer_4;
    QLabel *showTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *dotBt;
    QTextBrowser *dotTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(605, 470);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showCurrentDateTime = new QLabel(Widget);
        showCurrentDateTime->setObjectName(QStringLiteral("showCurrentDateTime"));
        QFont font;
        font.setPointSize(14);
        showCurrentDateTime->setFont(font);

        horizontalLayout_2->addWidget(showCurrentDateTime);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        showTime = new QLabel(Widget);
        showTime->setObjectName(QStringLiteral("showTime"));
        QFont font1;
        font1.setPointSize(40);
        showTime->setFont(font1);
        showTime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(showTime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startBt = new QPushButton(Widget);
        startBt->setObjectName(QStringLiteral("startBt"));

        horizontalLayout->addWidget(startBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopBt = new QPushButton(Widget);
        stopBt->setObjectName(QStringLiteral("stopBt"));

        horizontalLayout->addWidget(stopBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        resetBt = new QPushButton(Widget);
        resetBt->setObjectName(QStringLiteral("resetBt"));

        horizontalLayout->addWidget(resetBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        dotBt = new QPushButton(Widget);
        dotBt->setObjectName(QStringLiteral("dotBt"));

        horizontalLayout->addWidget(dotBt);


        verticalLayout->addLayout(horizontalLayout);

        dotTime = new QTextBrowser(Widget);
        dotTime->setObjectName(QStringLiteral("dotTime"));

        verticalLayout->addWidget(dotTime);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        showCurrentDateTime->setText(QApplication::translate("Widget", "2024\345\271\26405\346\234\21027\346\227\245 22:35:00", nullptr));
        showTime->setText(QApplication::translate("Widget", "00:00:00:000", nullptr));
        startBt->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        stopBt->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        resetBt->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        dotBt->setText(QApplication::translate("Widget", "\346\211\223\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
