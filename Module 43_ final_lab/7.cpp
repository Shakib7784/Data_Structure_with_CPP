#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,E;
    cin>>N>>E;
    int A[E],B[E];
   for(int i=0;i<E;i++)
   {
       cin>>A[i]>>B[i];
   }
   int k;
   cin>>k;
   int c=0;
   for(int i=0;i<E;i++)
   {
       if(k==A[i] || k == B[i])
       {
           c++;

       }
   }
   cout<<c;
}

