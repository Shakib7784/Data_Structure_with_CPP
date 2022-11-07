#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,k;
    cin>>N>>k;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int c=0;
     for(int i=0;i<N-1;i++)
    {
       for(int j=i+1;j<N;j++)
       {
           if(a[i]+a[j]==k)
           {
               c++;
           }
       }
    }
    cout<<c;

}
