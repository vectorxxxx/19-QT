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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *usernameLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *usernameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *passwordLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *passwordEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(213, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(120, 120));
        label->setStyleSheet(QStringLiteral("border-image: url(:/title.png);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        titleLabel = new QLabel(Widget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setPointSize(24);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(titleLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/username.png);"));

        horizontalLayout_4->addWidget(label_2);

        usernameLabel = new QLabel(Widget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        QFont font1;
        font1.setPointSize(20);
        usernameLabel->setFont(font1);

        horizontalLayout_4->addWidget(usernameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        usernameEdit = new QLineEdit(Widget);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        QFont font2;
        font2.setPointSize(16);
        usernameEdit->setFont(font2);

        horizontalLayout_4->addWidget(usernameEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(30, 30));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/password.png);"));

        horizontalLayout_3->addWidget(label_3);

        passwordLabel = new QLabel(Widget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setFont(font1);

        horizontalLayout_3->addWidget(passwordLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        passwordEdit = new QLineEdit(Widget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setFont(font2);
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwordEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        registerButton = new QPushButton(Widget);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setMinimumSize(QSize(20, 30));
        QFont font3;
        font3.setPointSize(14);
        registerButton->setFont(font3);
        registerButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(registerButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        loginButton = new QPushButton(Widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMinimumSize(QSize(20, 30));
        loginButton->setFont(font3);
        loginButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(loginButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 107, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        titleLabel->setText(QApplication::translate("Widget", "QQ\347\231\273\345\275\225\351\241\265\351\235\242", nullptr));
        label_2->setText(QString());
        usernameLabel->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QString());
        passwordLabel->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        registerButton->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        loginButton->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
