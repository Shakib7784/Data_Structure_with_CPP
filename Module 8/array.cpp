#include<bits/stdc++.h>
using namespace std;
void printarray(int ab[],int sizee)
{
    cout<<"print array: "<<endl;
    for(int i=0;i<sizee;i++)
    {
        cout<<ab[i]<<" ";
    }
}

int main()
{
    int a[60];
    int siz;
    cout<<"Give Size"<<endl;
    cin>>siz;
    for(int i=0;i<siz;i++)
    {
        cin>>a[i];
    }
    printarray(a,siz);
    int pos,val;
    cout<<"Position of the insertion: ";
    cin>>pos;
     cout<<"Value of the insertion: ";
     cin>>val;
     if(pos<0||pos>siz)
     {
         cout<<"Invalid position"<<endl;
     }
    else
    {
      /* for(int i=siz-1;i>=pos;i--)
     {
         a[i+1]=a[i];
     }
     a[pos]=val; */

            a[siz]=a[pos];
            a[pos]=val;
    }

     cout<<"Array after insertion: "<<endl;
     printarray(a,siz+1);
}
