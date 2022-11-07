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


 int cc=0,t=0;
     for(int i=0;i<r;i++)
    {
            for(int j=0;j<c;j++)
            {
                if(i==j)
                {
                    if(arr[i][j]==1)
                    {
                        t++;
                    }
                }
                else
                {
                    if(arr[i][j]==0)
                    {
                        cc++;
                    }
                }
            }
    }
    if(r!=c)
    {
        cout<<"not diagonal";
    }
    else if(cc==(r*c)-r)
    {
        if(t==r)
        {
            cout<<"yes, it is Identity matrix";
        }
        else
        {
            cout<<"No, it is not identity matrix";
        }
    }
    else
    {
        cout<<"No, it is not diagonal";
    }

}
