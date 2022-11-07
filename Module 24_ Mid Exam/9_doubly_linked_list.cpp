#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,position;
    cin>>n;
    int l[1000];
    int r[1000];
    for(int i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(l[i]==0)
        {
            r[position]=i;
            l[i]=position;
            position=i;
            while(r[position])
            {
                position=r[position];
            }
        }
    }
    cout<<"output: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<l[i]<<" "<<r[i]<<endl;
    }

}
