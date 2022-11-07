#include<bits/stdc++.h>
using namespace std;
void printarray( int a[], int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int siz;
    cout<<"Give Size: "<<endl;
    cin>>siz;
    int a[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is: "<<endl;
    printarray(a,siz);
    int pos;
    cout<<"enter position for deletion"<<endl;
    cin>>pos;
    if(pos<0||pos>siz-1)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        if(pos==siz-1)
        {
            siz--;
        }
        else
        {
            for(int i=pos+1;i<siz;i++)
            {
                a[i-1]=a[i];
            }
            siz--;
        }
    }
    cout<<"Array after deletion"<<endl;
    printarray(a,siz);
}
