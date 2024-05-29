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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *clearbutton;
    QPushButton *backButton;
    QPushButton *divideButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *multiButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *substractButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *addButton;
    QPushButton *zeroButton;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *equalButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(370, 532);
        Widget->setMinimumSize(QSize(370, 532));
        Widget->setMaximumSize(QSize(370, 532));
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(344, 80));
        lineEdit->setMaximumSize(QSize(344, 80));
        lineEdit->setReadOnly(false);

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        clearbutton = new QPushButton(Widget);
        clearbutton->setObjectName(QStringLiteral("clearbutton"));
        clearbutton->setMinimumSize(QSize(80, 80));
        clearbutton->setMaximumSize(QSize(80, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        clearbutton->setFont(font);

        gridLayout->addWidget(clearbutton, 0, 0, 1, 1);

        backButton = new QPushButton(Widget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setMinimumSize(QSize(170, 80));
        backButton->setMaximumSize(QSize(170, 80));
        backButton->setFont(font);
        backButton->setIconSize(QSize(260, 50));

        gridLayout->addWidget(backButton, 0, 1, 1, 2);

        divideButton = new QPushButton(Widget);
        divideButton->setObjectName(QStringLiteral("divideButton"));
        divideButton->setMinimumSize(QSize(80, 80));
        divideButton->setMaximumSize(QSize(80, 80));
        divideButton->setFont(font);

        gridLayout->addWidget(divideButton, 0, 3, 1, 1);

        sevenButton = new QPushButton(Widget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setMinimumSize(QSize(80, 80));
        sevenButton->setMaximumSize(QSize(80, 80));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        eightButton = new QPushButton(Widget);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setMinimumSize(QSize(80, 80));
        eightButton->setMaximumSize(QSize(80, 80));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        nineButton = new QPushButton(Widget);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setMinimumSize(QSize(80, 80));
        nineButton->setMaximumSize(QSize(80, 80));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        multiButton = new QPushButton(Widget);
        multiButton->setObjectName(QStringLiteral("multiButton"));
        multiButton->setMinimumSize(QSize(80, 80));
        multiButton->setMaximumSize(QSize(80, 80));
        multiButton->setFont(font);

        gridLayout->addWidget(multiButton, 1, 3, 1, 1);

        fourButton = new QPushButton(Widget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setMinimumSize(QSize(80, 80));
        fourButton->setMaximumSize(QSize(80, 80));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setMinimumSize(QSize(80, 80));
        fiveButton->setMaximumSize(QSize(80, 80));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(Widget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setMinimumSize(QSize(80, 80));
        sixButton->setMaximumSize(QSize(80, 80));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        substractButton = new QPushButton(Widget);
        substractButton->setObjectName(QStringLiteral("substractButton"));
        substractButton->setMinimumSize(QSize(80, 80));
        substractButton->setMaximumSize(QSize(80, 80));
        substractButton->setFont(font);

        gridLayout->addWidget(substractButton, 2, 3, 1, 1);

        oneButton = new QPushButton(Widget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setMinimumSize(QSize(80, 80));
        oneButton->setMaximumSize(QSize(80, 80));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        twoButton = new QPushButton(Widget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setMinimumSize(QSize(80, 80));
        twoButton->setMaximumSize(QSize(80, 80));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        threeButton = new QPushButton(Widget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setMinimumSize(QSize(80, 80));
        threeButton->setMaximumSize(QSize(80, 80));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        addButton = new QPushButton(Widget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setMinimumSize(QSize(80, 80));
        addButton->setMaximumSize(QSize(80, 80));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 3, 3, 1, 1);

        zeroButton = new QPushButton(Widget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setMinimumSize(QSize(80, 80));
        zeroButton->setMaximumSize(QSize(80, 80));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 4, 0, 1, 1);

        leftButton = new QPushButton(Widget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setMinimumSize(QSize(80, 80));
        leftButton->setMaximumSize(QSize(80, 80));
        leftButton->setFont(font);

        gridLayout->addWidget(leftButton, 4, 1, 1, 1);

        rightButton = new QPushButton(Widget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setMinimumSize(QSize(80, 80));
        rightButton->setMaximumSize(QSize(80, 80));
        rightButton->setFont(font);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        equalButton = new QPushButton(Widget);
        equalButton->setObjectName(QStringLiteral("equalButton"));
        equalButton->setMinimumSize(QSize(80, 80));
        equalButton->setMaximumSize(QSize(80, 80));
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        clearbutton->setText(QApplication::translate("Widget", "C", nullptr));
        backButton->setText(QString());
        divideButton->setText(QApplication::translate("Widget", "\303\267", nullptr));
        sevenButton->setText(QApplication::translate("Widget", "7", nullptr));
        eightButton->setText(QApplication::translate("Widget", "8", nullptr));
        nineButton->setText(QApplication::translate("Widget", "9", nullptr));
        multiButton->setText(QApplication::translate("Widget", "x", nullptr));
        fourButton->setText(QApplication::translate("Widget", "4", nullptr));
        fiveButton->setText(QApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QApplication::translate("Widget", "6", nullptr));
        substractButton->setText(QApplication::translate("Widget", "-", nullptr));
        oneButton->setText(QApplication::translate("Widget", "1", nullptr));
        twoButton->setText(QApplication::translate("Widget", "2", nullptr));
        threeButton->setText(QApplication::translate("Widget", "3", nullptr));
        addButton->setText(QApplication::translate("Widget", "+", nullptr));
        zeroButton->setText(QApplication::translate("Widget", "0", nullptr));
        leftButton->setText(QApplication::translate("Widget", "(", nullptr));
        rightButton->setText(QApplication::translate("Widget", ")", nullptr));
        equalButton->setText(QApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
