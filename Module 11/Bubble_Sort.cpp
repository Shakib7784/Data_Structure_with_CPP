#include<bits/stdc++.h>
using namespace std;
int main()
{
    int siz;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    //sort
   cout<<" After sorting"<<endl;
    for(int j=0;j<siz-1;j++)
    {
        int temp, c=0;
        cout<<"after iteration no"<<j<<endl;
        for(int i=0;i<siz-j-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            c++;
            swap(arr[i],arr[i+1]);
        /*   temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;*/
        }
        //checking
                   for(int i=0;i<siz;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
    }
    cout<<endl;
            if(c==0)
            {
                break;
            }
    }

cout<<"Sorted array is : "<<endl;
     for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<" ";
    }
}
