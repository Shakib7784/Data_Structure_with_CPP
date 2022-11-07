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
    int sum=0;
    for(int i=0;i<siz;i++)
    {
        sum= sum+arr[i];
    }
    cout<<sum;
}
