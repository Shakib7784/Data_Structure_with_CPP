#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<a[i]<<" ";
        }
    }
}
