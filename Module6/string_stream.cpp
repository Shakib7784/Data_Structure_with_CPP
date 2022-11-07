#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="My name is Shakib";
    //stringstream t(s);
    stringstream t;
    t<<s;
    while(t>>s)
    {
        cout<<s<<endl;
    }

 string s1="nortihP";

    string:: reverse_iterator it;

    for(it=s1.rbegin();it!=s1.rend();it++)

     {

         cout<<*it;

     }
}
