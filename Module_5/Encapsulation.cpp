#include<bits/stdc++.h>
using namespace std;
class Employee
{
private:
    int salary;
public:
    void SetSalary(int s)
    {
        salary=s;
    }
    int GetSalary()
    {
        return salary;
    }
};
int main()
{
    Employee em;
    em.SetSalary(20000);
    cout<<em.GetSalary();
}
