#include<bits/stdc++.h>
//#include<stack>
using namespace std;
bool match_bracket(string s)
{
    stack<char>storage;
    for(int i=0;i<s.size();i++)
    {
        if(storage.empty())
            {
                storage.push(s[i]);
            }
//        else if(s[i]==')')
//        {
//            while( storage.top()!='(')
//            {
//                storage.push(s[i]);
//            }
//            storage.pop();
//        }
    else if(s[i]==')' && storage.top()=='(' ||
                s[i]=='}' && storage.top()=='{' ||
                 s[i]==']' && storage.top()=='[' )
        {
                 storage.pop();

        }
//        else if(s[i]=='}' && storage.top()=='{')
//        {
//                 storage.pop();
//
//        }
//         else if(s[i]==']' && storage.top()=='[')
//        {
//                 storage.pop();
//
//        }
        else
        {
            storage.push(s[i]);
        }
    }
    if(storage.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cin>>s;
    //getline(cin,s);
    bool result = match_bracket(s);
    if(result==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"NO";
    }
}
