#include<bits/stdc++.h>
using namespace std;
int main()
{
    int siz;
    cout<<"Take input for size: ";
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<siz;i++)
    {
        for(int j=i+1;j<=siz;j++)
        {

             if(arr[i]==arr[j])
            {
                for(int k=j+1;k<siz;k++)
                {
                    arr[k-1]=arr[k];
                }
                siz--;
            }
        }
    }
    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<" ";
    }
}
