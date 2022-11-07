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
    int ma=a[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           ma=max(ma,a[i][j]);
        }
    }
   for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(a[i][j]==ma)
          {
              cout<<"Max: "<<ma<<endl;
              cout<<"Location: ["<<i<<"]["<<j<<"]"<<endl;
          }
        }
    }

}
