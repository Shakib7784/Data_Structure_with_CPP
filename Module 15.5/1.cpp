#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a= sqrt(n);
    int aa[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin>>aa[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
           cout<<aa[i][j]<<" ";
        }
        cout<<endl;
    }
}
