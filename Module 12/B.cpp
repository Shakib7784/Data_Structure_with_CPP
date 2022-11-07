#include<bits/stdc++.h>
using namespace std;
int main()
{
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

        for(int i=1;i<=q;i++)
        {
            int s,t;
            cin>>s>>t;

            int mi=a[s-1];
            for(int j=s-1;j<t;j++)
            {
                mi=min(mi,a[j]);

            }
            cout<<mi<<endl;

        }

        cas++;
    }


}
