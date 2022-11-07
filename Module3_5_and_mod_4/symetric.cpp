#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int cc=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(i==j)
           {
               continue;
           }
           else
           {
               if(arr[i][j]==arr[j][i])
               {
                   cc++;
               }
           }
        }
    }
    if(cc==(r*c)-r)
    {
        cout<<"YES, it is symmetric";
    }
    else
    {
        cout<<"No,it is not symmetric";
    }
}
