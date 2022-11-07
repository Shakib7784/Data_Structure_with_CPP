
#include<bits/stdc++.h>
using namespace std;
class  Human
{
    public:
    string name;
    int age;
    void walk()
    {
        cout<<"I can walk"<<endl;
    }


};
class Student: public Human
{
public:
    int id;
    char section;
    void Exam()
    {
        cout<<"I give Exam"<<endl;
    }
};
class Teacher:public Human
{
    public:
    int salary;
    string designation;
    void Teach()
    {
        cout<<"I teach students"<<endl;
    }
};
int main()
{

    Student s1;
    s1.name="Shakib";
    s1.age=24;
    s1.id=19103023;
    s1.section='B';
    cout<<s1.name<<endl<<s1.age<<endl<<s1.id<<endl<<s1.section<<endl;
    s1.walk();
    s1.Exam();
    Teacher t1;
    t1.name="Hridoy";
    t1.age=24;
    t1.salary=40000;
    t1.designation="Lecturer";
    cout<<t1.name<<endl<<t1.age<<endl<<t1.salary<<endl<<t1.designation<<endl;
    t1.walk();
    t1.Teach();
}
