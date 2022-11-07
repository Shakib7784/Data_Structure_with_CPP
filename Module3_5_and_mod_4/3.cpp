#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0;
    string s;
    cin>>s;
    for(int i=97;i<=122;i++)
    {
        int c=0;
        for(int j=0;j<s.size();j++)
        {
            if(i==s[j])
            {

                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<char(i);
            d++;
            break;
        }

    }
    if(d==0)
    {
         cout<<"None";
    }
}


