#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];

    }
    int Q;
    cin>>Q;

    for(int i=0;i<Q;i++)
    {
        int R1,R2;
        cin>>R1>>R2;
         int sum=0;
       for(int j=R1-1;j<R2;j++)
       {
           if(A[j]>0)
           sum=sum+A[j];
       }
       cout<<sum<<endl;
    }
}

