#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int a[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            else if(i==0)
            {
                sum=sum+a[i][j];
            }
            else if(i==m-1)
            {
                sum=sum+a[i][j];
            }
            else if(i+j==m-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<sum;

}
