#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int T;
    cin>>T;
     int cas=0;
    while(T--)
    {
          cout<<"Case "<<cas+1<<":"<<endl;
        int N,q;
        cin>>N>>q;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int y=0;y<q;y++)
        {
            int k,i,v,j;
            cin>>k;
            if(k==1)
            {
                cin>>i;
                cout<<a[i]<<endl;
                a[i]=0;
            }
            else if(k==2)
            {
                cin>>i>>v;
                a[i]=a[i]+v;
            }
            else if(k==3)
            {
                cin>>i>>j;
                int sum=0;
                for(int z=i;z<=j;z++)
                {
                    sum=sum+a[z];

                }
                cout<<sum<<endl;
            }
        }


    }
    return 0;

}
