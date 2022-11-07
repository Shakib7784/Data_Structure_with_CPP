#include<bits/stdc++.h>
using namespace std;
void delete_element(int a[],int *siz,int t)
{
    int n=*siz;
    while(t--)
    {

        int k=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                a[i]=a[i+1];
                break;
            }
            k++;
        }
        for(int i=k;i<n;i++)
        {
            a[i]=a[i+1];
        }


        *siz=*siz-1; // we are decreasing size here and it will decrease the value of n from main function also
        n--;

    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    delete_element(arr,&n,t); // we don't need to pass address of arrray . array itself is a pointer
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
