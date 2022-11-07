#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[3];
     for(int i=0;i<3;i++)
    {
        cin>>n[i];
    }
    int c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(n[i]==n[j])
            {
                c++;
            }
        }
    }
    if(c==3)
    {
        cout<<"1";
    }
    else
    cout<<3-c;


}



