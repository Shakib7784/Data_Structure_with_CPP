#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
         int N;
        long long int C;
        cin>>N>>C;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        int sum=0;
         for(int i=0;i<N;i++)
        {
            sum+= A[i]*2;
        }
        if(sum<=C)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

}
