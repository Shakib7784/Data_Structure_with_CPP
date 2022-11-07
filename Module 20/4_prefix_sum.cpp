#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N],ps[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        ps[i]=ps[i-1]+A[i];
    }
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int R1,R2;
        cin>>R1>>R2;
        int res = (ps[R2-1]-ps[R1-1])+R1;
        cout<<res<<endl;
    }
}
