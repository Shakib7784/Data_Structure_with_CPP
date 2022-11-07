#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n], a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a2[i]=arr[i];
    }
    sort(arr,arr+n);
   cout<<arr[k-1]<<" "<<arr[n-k];
}
