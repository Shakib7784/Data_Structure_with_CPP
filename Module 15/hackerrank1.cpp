#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int aa[m],bb[n];
    for(int i=0;i<m;i++)
    {
        cin>>aa[i];

    }
     for(int i=0;i<n;i++)
    {
        cin>>bb[i];

    }
    int c=0;
     for(int i=0;i<m;i++)
    {
        if(a+aa[i]>=s && a+aa[i]<=t)
        {
            c++;
        }

    }
    int cc=0;
     for(int i=0;i<n;i++)
    {
        if(b+bb[i]>=s && b+bb[i]<=t)
        {
            cc++;
        }

    }
    cout<<c<<endl<<cc<<endl;
}
