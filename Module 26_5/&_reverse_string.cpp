#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>ch;
    string n;
    cin>>n;
    queue<char>c;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='.')
        {
            ch.pop();
            c.push(cc);
        }
        else
        {
            ch.push(n[i]);
        }
    }

}
