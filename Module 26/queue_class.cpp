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
        salary=-1.0;
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
    float setsalary()
    {
        return salary;
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
        cout<<"ID : "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<endl;
    }

};
int main()
{
    Queue<person>q;

     person p("Shakib",2345.6);
     person r("Hasan",23445.6);
     person s("Hridoy",7345.6);
    q.Push(p);
     q.Push(r);
      q.Push(s);
      if(!q.emptyy())
   {
       cout<<"Front :"<<endl;
         person result;
         result=q.FronT();
         result.display();

    cout<<"Back :"<<endl;
         person bac;
         bac=q.Back();
         bac.display();
   }
   while(!q.emptyy())
   {
       person result;
       result=q.FronT();
       result.display();
       q.Pop();
   }

}

