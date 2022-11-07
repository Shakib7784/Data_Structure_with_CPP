#include<bits/stdc++.h>
#include"stack_template.h"
using namespace std;
int globalid =100;
class person
{
    int id;
    string name;
    float salary;
public:
    person()
    {
        id=-1;
        name=" ";
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
    person(string name, float salary)
    {

       getname(name);
        getsalary(salary);
        id=   globalid;
        globalid++;
    }
   void display()
   {
       cout<<"Name : "<<name<<endl;
       cout<<"Id : "<<id<<endl;
       cout<<"Salary : "<<salary<<endl;
   }
};
int main()
{
   Stack<person>s;
   person p ("Shakib", 2345.6);
   person q ("Hasan", 45.644);
   person r ("Readoy", 245.6324);
   s.push(p);
   s.push(q);
   s.push(r);
   while(!s.emptyy())
   {
        person result;
       result = s.Top();
      result.display();
       s.pop();
   }
    person result;
    result = s.Top();
    result.display();

   cout<<s.sizee();






}

