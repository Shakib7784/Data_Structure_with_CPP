#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    int l[N];
    for(int i=0;i< N;i++)
    {
        cin>>l[i];
    }
    sort(l,l+N);
   // cout<<l[0]<<endl<<l[N-1];
    int sum=0;
    for(int i=N-1;i>N-K-1;i--)
    {
       sum=sum+l[i];


    }
    cout<<sum;
}
