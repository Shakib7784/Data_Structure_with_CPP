#include<bits/stdc++.h>
#include"stack_template.h"
using namespace std;
int main()
{
    Stack<pair<int,char>>s;
    s.push(make_pair(1,'a')); // to push in pair we have to use make_pair() function;
    s.push(make_pair(2,'b'));
    s.push(make_pair(3,'c'));
    pair<int,char>ss;
    ss=s.Top();
       cout<<s.emptyy()<<endl;
    cout<<ss.first<<ss.second<<endl;
    while(!s.emptyy())
    {
        ss=s.Top();
        cout<<ss.first<<" "<<ss.second<<endl;
        s.pop();
        cout<<"size: "<<s.sizee()<<endl;
    }
    //ss=s.Top();
    cout<<s.emptyy();





}

