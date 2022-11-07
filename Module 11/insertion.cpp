#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    for(int i=1;i<n;i++)
    {
        cout<<"Iteration: "<<i<<endl;
        int c=0;
        key=arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=key;
    //checking
                    for(int i=0;i<n;i++)

                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
}
cout<<"sorted: "<<endl;
for(int i=0;i<n;i++)

{
    cout<<arr[i]<<" ";
}
}

