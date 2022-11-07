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

        if(arr[i]%3==0)
        {
            arr[i]=-1;
        }
        cout<<arr[i]<<" ";
    }

}
