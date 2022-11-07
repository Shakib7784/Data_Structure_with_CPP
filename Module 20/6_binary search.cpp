#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int l=0,u=N-1;
    int mid=(l+u)/2;
    int c=0;
        for(int i=l;i<=u;mid=(i+u)/2) // or while(l<=u)
        {
            if(A[mid]==K)
            {
                cout<<mid+1;
                c++;
               break;
            }
            else if(A[mid]<K)
            {
                i=mid+1;
            }
            else if(A[mid]>K)
            {
                u=mid-1;
            }
        }

    if(c==0)
    {

        cout<<"value does not found"<<endl;
    }
}
