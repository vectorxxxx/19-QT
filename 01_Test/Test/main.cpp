#include <iostream>

using namespace std;

class student
{
public:
    char name[64];
    int age;

    void test1()
    {
        cout << "test1" << endl;
    }

    void test2();

private:
    int salary;
};

void student::test2()
{
    cout << "test2" << endl;
    salary = 10000;
    cout << salary << endl;
}

int main()
{
//    for(int i = 0;i < 10; i++)
//    {
//        cout << "Hello World!" << i << endl;
//    }

    student stu1;
    student *stu2 = new student;

    stu1.age = 18;
    stu2->age = 19;
    cout << stu1.age << endl;
    cout << stu2->age << endl;

    stu1.test1();
    stu2->test2();

    //stu1.salary = 3000;

    return 0;
}
