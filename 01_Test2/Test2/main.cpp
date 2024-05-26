#include <iostream>

using namespace std;

class person
{
public:
    person();               // 构造函数
    ~person();              // 析构函数

    int age;

    void dosth();
    void dosth(string sth); // 重载函数

    virtual void testVirtual1();      // 虚函数：父类有自己的实现，子类可以选择进行重写
    virtual void testVirtual2() = 0;  // 纯虚函数：子类必须实现，否则无法初始化和调用

protected:
    int gender;
};

// 构造函数
person::person()
{
    cout << "Init..." << endl;
}
// 析构函数
person::~person()
{
    cout << "Destroy..." << endl;
}

// 重载函数
void person::dosth()
{
    cout << "Do Sth." << endl;
}
void person::dosth(string sth)
{
    cout << "Do " + sth << endl;
}

// 虚函数
void person::testVirtual1()
{
   cout << "person->testVirtual1" << endl;
}

// 类的继承
class student: public person
{
public:
    int grade;

// 只有在父类中使用关键字"virtual"声明的成员函数才是虚函数，才可以被子类重写
//    void dosth()
//    {
//        cout << "student Do Sth." << endl;
//    };

    virtual void testVirtual1()
    {
        cout << "student->testVirtual1" << endl;
    }

    // 纯虚函数：子类必须实现，才能进行调用， 否则报错：because the following virtual functions are pure within 'student':
    virtual void testVirtual2()
    {
        cout << "student->testVirtual2" << endl;
    }
};

// 3、类的继承
int main()
{
    student *s1 = new student;
    s1->grade = 100;
    s1->age = 20;
    //s1->gender = 1; // 不能直接访问，可以通过子类函数间接访问
    cout << s1->grade << endl;
    cout << s1->age << endl;
    //cout << s1->gender << endl;
    s1->dosth("Study");


    s1->testVirtual1();
    // 纯虚函数：子类必须实现，才能进行调用
    s1->testVirtual2();


    delete s1;

    return 0;
}

// 1、类函数的重载
// 2、构造函数和析构函数
//int main()
//{
//    person p1;
//    person *p2 = new person;

//    p1.dosth();
//    p2->dosth("Work");

//    // 只有通过“person *p2 = new person; ”这种方式定义的才可以调用 delete；
//    // delete 时会触发析构函数
//    delete p2;
//    // 而通过“person p1;”定义的不能调用 delete，否则会报错：error: type 'class person' argument given to 'delete', expected pointer
//    // 虽然不能调用 delete，但是会自动触发析构函数
//    // delete p1;

//    return 0;
//}
