#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>ch;
    queue<char>q;
    string s;
    cin>>s;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]=='.' || i==s.size())
        {
            while(!ch.empty())
            {
                q.push(ch.top());
               ch.pop();
            }
            if(i<s.size())
           q.push('.');
        }
        else
        {
            ch.push(s[i]);
        }
    }
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
}
