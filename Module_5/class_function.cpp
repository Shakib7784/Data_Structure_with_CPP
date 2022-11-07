#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    string name;
    void printname();
    void printid()
    {
        cout<<id<<endl;
    }
    char marks(char grade);
};
void student :: printname()
{
    cout<<name<<endl;
}
char student::marks(char grade)
{
    return grade;
}
int main()
{
    student s1;
    s1.id=19103023;
    s1.name="Shakib";
    s1.printid();
    s1.printname();
    cout<<s1.marks('A');
}
