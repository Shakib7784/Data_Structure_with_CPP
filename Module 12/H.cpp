#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            for(int j=s.size();j>i;j--)
            {
               if(s[j]=='Z')
               {
                   cout<<j-i+1;
                   break;
               }
            }
            break;
        }
    }

}


