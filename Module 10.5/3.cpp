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

    for(int i=siz-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}

