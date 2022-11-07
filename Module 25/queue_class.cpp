#include<bits/stdc++.h>
#include"queue_header_file.h"
using namespace std;
int globalid =200;
class person
{
    string name;
    float salary;
    int id;
public:
    person()
    {
        name="";
        id=-1;
        salary=0.0
    }
    void getname(string name)
    {
        this->name=name;
    }
    string setname()
    {
        return name;
    }
    void getsalary(float salary)
    {
        this->salary=salary;
    }
    person(string name,float salary)
    {
        getname(name);
        getsalary(salary);
        id=globalid;
        globalid++;
    }
    void display()
    {
        cout<<"ID : "<<name<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};
int main()
{

}

