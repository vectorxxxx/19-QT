#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置窗口标题
    this->setWindowTitle("计算器");

    // 设置显示行编辑器
    // 固定高度和宽度
    ui->lineEdit->setMaximumSize(344, 80);
    ui->lineEdit->setMinimumSize(344, 80);
    // 字体
    QFont font("微软雅黑", 28);
    ui->lineEdit->setFont(font);

    // 设置回退按钮背景图片
    QIcon icon("D:/workspace-mine/19-QT/08_calc/calc/back.png");
    ui->backButton->setIcon(icon);

    // 设置等于号背景色
    ui->equalButton->setStyleSheet("background-color:orange");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_zeroButton_clicked()
{
    expression += "0";
    ui->lineEdit->setText(expression);
}

void Widget::on_oneButton_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}

void Widget::on_twoButton_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}

void Widget::on_threeButton_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}

void Widget::on_fourButton_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}

void Widget::on_fiveButton_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}

void Widget::on_sixButton_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}

void Widget::on_sevenButton_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}

void Widget::on_eightButton_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}

void Widget::on_nineButton_clicked()
{
    expression += "9";
    ui->lineEdit->setText(expression);
}

void Widget::on_divideButton_clicked()
{
    expression += "/";
    ui->lineEdit->setText(expression);
}

void Widget::on_multiButton_clicked()
{
    expression += "*";
    ui->lineEdit->setText(expression);
}

void Widget::on_substractButton_clicked()
{
    expression += "-";
    ui->lineEdit->setText(expression);
}

void Widget::on_addButton_clicked()
{
    expression += "+";
    ui->lineEdit->setText(expression);
}

void Widget::on_leftButton_clicked()
{
    expression += "(";
    ui->lineEdit->setText(expression);
}

void Widget::on_rightButton_clicked()
{
    expression += ")";
    ui->lineEdit->setText(expression);
}

void Widget::on_clearbutton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}

void Widget::on_backButton_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}

void Widget::on_equalButton_clicked()
{
    QStack<int> s_num, s_opt;

    char opt[128] = {0};
    int i = 0, tmp = 0, num1, num2;

    QByteArray ba;
    ba.append(expression);   // QString 转成 QByteArray
    strcpy(opt, ba.data());  // data() 将 QByteArray 转成 const char *

    while(opt[i] != '\0' || s_opt.empty() != true)
    {
        if(opt[i] >= '0' && opt[i] <= '9')
        {
            tmp = tmp * 10 + opt[i] - '0';
            i++;
            if (opt[i] < '0' || opt[i] > '9')
            {
                s_num.push(tmp);
                tmp = 0;
            }
        }
        // 操作符
        else
        {
            if (s_opt.empty() == true || Priority(opt[i]) > Priority(s_opt.top()) ||
                    (s_opt.top() == '(' && opt[i] != ')'))
            {
                s_opt.push(opt[i]);
                i++;
                continue;
            }

            if (s_opt.top() == '(' && opt[i] == ')')
            {
                s_opt.pop();
                i++;
                continue;
            }

            if (Priority(opt[i]) <= Priority(s_opt.top()) || (opt[i] == ')' && s_opt.top() != '(') ||
                (opt[i] == '\0' && s_opt.empty() != true))
            {
                char ch = s_opt.top();
                s_opt.pop();
                switch (ch) {
                    case '+':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num1 + num2);
                        break;
                    case '-':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num2 - num1);
                        break;
                    case '*':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num1 * num2);
                        break;
                    case '/':
                        num1 = s_num.top();
                        s_num.pop();
                        num2 = s_num.top();
                        s_num.pop();
                        s_num.push(num2 / num1);
                        break;
                }
            }
        }
    }

    expression = QString::number(s_num.top());
    ui->lineEdit->setText(expression);
}

int Widget::Priority(char ch)
{
    switch (ch) {
        case '(':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}
