#include<bits/stdc++.h>
using namespace std;
class Employee
{
public:
    int id;
    string name,position;
    Employee(int i, string n, string p);


};
 Employee:: Employee(int i, string n, string p)
    {
        id=i;
        name=n;
        position=p;
    }
int main()
{
    Employee em(191, "Shakib","CEO");
    cout<<em.id<<endl<<em.name<<endl<<em.position;

}
