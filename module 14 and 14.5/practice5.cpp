#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                for(int k=0;k<m;k++)
                {
                    for(int l=0;l<n;l++)
                    {
                        if(i==k&&j==l)
                        {
                            continue;
                        }
                        if(a[i][j]==a[k][l])
                        {
                            a[k][l]=-1;
                        }
                    }
                }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

