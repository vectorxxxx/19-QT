/********************************************************************************
** Form generated from reading UI file 'ctrl.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRL_H
#define UI_CTRL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrl
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *backButton;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_8;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_9;
    QLabel *label_10;

    void setupUi(QWidget *ctrl)
    {
        if (ctrl->objectName().isEmpty())
            ctrl->setObjectName(QStringLiteral("ctrl"));
        ctrl->resize(800, 600);
        widget = new QWidget(ctrl);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 40, 681, 511));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setMinimumSize(QSize(40, 40));
        backButton->setStyleSheet(QStringLiteral("border-image: url(:/img/feature.png);"));

        horizontalLayout->addWidget(backButton);


        verticalLayout_9->addLayout(horizontalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_2);

        verticalSpacer_5 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/img/led.png);"));

        verticalLayout->addWidget(pushButton_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(14);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/img/curtain.png);"));

        verticalLayout_2->addWidget(pushButton_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/img/socket.png);"));

        verticalLayout_3->addWidget(pushButton_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/img/tv.png);"));

        verticalLayout_7->addWidget(pushButton_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/img/room.png);"));

        verticalLayout_4->addWidget(pushButton_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/img/orientation.png);"));

        verticalLayout_5->addWidget(pushButton_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/img/safety.png);"));

        verticalLayout_6->addWidget(pushButton_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setStyleSheet(QStringLiteral("border-image: url(:/img/battery.png);"));

        verticalLayout_8->addWidget(pushButton_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_10);


        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_3);


        retranslateUi(ctrl);

        QMetaObject::connectSlotsByName(ctrl);
    } // setupUi

    void retranslateUi(QWidget *ctrl)
    {
        ctrl->setWindowTitle(QApplication::translate("ctrl", "Form", nullptr));
        label_11->setText(QString());
        label->setText(QApplication::translate("ctrl", "\344\270\273\346\234\27201", nullptr));
        backButton->setText(QString());
        label_2->setText(QApplication::translate("ctrl", "--\350\277\230\346\262\241\346\234\211\346\225\260\346\215\256\345\223\246--", nullptr));
        pushButton_2->setText(QString());
        label_3->setText(QApplication::translate("ctrl", "\347\224\265\347\201\257", nullptr));
        pushButton_3->setText(QString());
        label_4->setText(QApplication::translate("ctrl", "\347\252\227\345\270\230", nullptr));
        pushButton_4->setText(QString());
        label_5->setText(QApplication::translate("ctrl", "\346\217\222\345\272\247", nullptr));
        pushButton_8->setText(QString());
        label_9->setText(QApplication::translate("ctrl", "\347\224\265\350\247\206", nullptr));
        pushButton_5->setText(QString());
        label_6->setText(QApplication::translate("ctrl", "\346\210\277\351\227\264", nullptr));
        pushButton_6->setText(QString());
        label_7->setText(QApplication::translate("ctrl", "\345\256\232\344\275\215", nullptr));
        pushButton_7->setText(QString());
        label_8->setText(QApplication::translate("ctrl", "\345\256\211\345\205\250", nullptr));
        pushButton_9->setText(QString());
        label_10->setText(QApplication::translate("ctrl", "\347\224\265\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctrl: public Ui_ctrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRL_H
