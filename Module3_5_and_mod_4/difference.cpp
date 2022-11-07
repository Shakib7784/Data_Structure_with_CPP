#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j< n;j++)
        {
            cin>>a[j];
        }
        int m=0;
            sort(a,a+n);
for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";

        }


    }
}
