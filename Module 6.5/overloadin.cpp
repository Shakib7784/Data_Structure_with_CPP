#include<bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout<<"I am from parent class";
    }
};
class Child:public Parent
{
 public:
    void show()
    {
        cout<<"I am from child class";
    }
};
int main()
{
    Child C;
    C.show();
}
