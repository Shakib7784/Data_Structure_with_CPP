#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int mid=n/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(j==mid)
           {
               sum=sum+a[i][j];
           }
           else if(i==mid)
           {
               sum=sum+a[i][j];
           }
          else if( i==0 &&(j<mid))
          {
              sum=sum+a[i][j];
          }
          else if(j==0 && i>mid)
          {
              sum=sum+a[i][j];
          }
          else if(j==n-1 && i<mid)
          {
              sum=sum+a[i][j];
          }
          else if(i==n-1 && j>mid)
          {
              sum=sum+a[i][j];
          }
        }

    }
    cout<<sum;
}
