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
 int g=arr[0][0];
     for(int i=0;i<r;i++)
    {
            for(int j=0;j<c;j++)
            {
                if(i==j)
                {
                    if(g==arr[i][j])
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
            cout<<"yes, it is Scaler matrix";
        }
        else
        {
            cout<<"No, it is not Scaler matrix";
        }
    }
    else
    {
        cout<<"No, it is not diagonal";
    }

}

