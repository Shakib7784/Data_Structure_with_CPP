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
   int store =k;
   int c=0;
   int traverse;
   do
   {
        traverse =1;
        for(int i=0;i<E;i++)
        {
           if(k==A[i] && store !=B[i])
           {
               c++;
               traverse=0;
               k=B[i];
               i=0;
           }
        }
   }while(traverse!=1);
   cout<<c;
}


