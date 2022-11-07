#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {

            if(s[i]==s[j]&&i!=j)
            {
                c++;
                break;
            }
        }
    }
    if(c>0)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
}
