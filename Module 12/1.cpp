#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[4];
    for(int i=0;i<4;i++)
    {
        cin>>p[i];
    }
    int c=0;
     for(int i=0;i<4;i++)
    {
        if(p[i]>=10)
        {
            c++;
        }
    }
    cout<<c;

}
