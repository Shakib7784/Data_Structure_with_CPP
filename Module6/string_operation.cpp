#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="afdajfjjbbbb";
    cout<<s.find('d')<<endl;
    cout<<s.rfind("j")<<endl;
    cout<<s.find_first_of('d')<<endl;
    cout<<s.find_last_of('j')<<endl;
    cout<<s.find_first_not_of('b')<<endl;
    cout<<s.find_last_not_of('b')<<endl;
    cout<<s.substr(2,4)<<endl;


}
