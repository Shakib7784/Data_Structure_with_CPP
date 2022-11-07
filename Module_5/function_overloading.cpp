#include<bits/stdc++.h>
using namespace std;
class practice
{
public :
    int add(int a,double b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
    void add(string name)
    {
        cout<<name;
    }
};
int main()
{
    practice p;
    cout<<p.add(4.5,6.7)<<endl;
    cout<<p.add(4.5,6)<<endl;
    p.add("shakib");

}
