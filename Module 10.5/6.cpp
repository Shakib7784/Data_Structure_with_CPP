#include<bits/stdc++.h>
using namespace std;
int takeInput( int arr[],int siz)
{
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
}


int main()
{
    int siz1,siz2;
    cout<<"input size for first array: "<<endl;
    cin>>siz1;
    int A[siz1];
   cout<<"input values for first array: "<<endl;
   takeInput(A,siz1);
   cout<<"input size for second array: "<<endl;
    cin>>siz2;
    int B[siz2];
   cout<<"input for second array:" <<endl;
   takeInput(B,siz2);

   //linear search;
    int c=0;
   cout<<"Output is :"<<endl;
   for(int i=0;i<siz1;i++)
   {
       for(int j=0;j<siz2;j++)
       {
           if(A[i]==B[j])
           {
               cout<<A[i]<<" ";
               c++;
               break;
           }
       }
   }

   if(c==0)
   {

       cout<<"Empty Set";
   }


   //binary search;
 /*  sort(A,A+siz1);
   sort(B,B+siz2);
    int c=0;
   for(int i=0;i<siz1;i++)
   {
        int lower=0, upper = siz2-1;

       for(int j=0;j<siz2;j++)
       {
           int mid = (lower+upper)/2;
           if(B[mid]==A[i])
           {
               cout<<B[mid]<<" ";
               c++;
               break;
           }
           else if( B[mid]<A[i])
           {
               lower=mid+1;
           }
           else
           {

               upper=mid-1;
           }
       }
   }
   if(c==0)
   {
       cout<<"Empty set"<<endl;
   }*/



}
