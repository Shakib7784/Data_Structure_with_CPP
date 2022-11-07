#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int v,int l,int u)
{
    if(l<=u)
    {
        int mid = (l+u)/2;
        if(a[mid]==v)
        {
            return mid;
        }
        else if(a[mid]<v)
        {
            binarySearch(a,v,mid+1,u);
        }
        else
        {
            binarySearch(a,v,l,mid-1);
        }

    }
    else
    {
        return -1;
    }
}
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
    //linear search
    int search_value;
    cout<<"enter which value do you want to search :"<<endl;
    cin>>search_value;
    int c=0;
    for(int i=0;i<siz;i++)
    {
       if(arr[i]==search_value)
       {
            cout<<"Found at index : "<<i<<"\t position: "<<i+1<<"\t Value: "<<arr[i]<<endl;
            c++;
       }
    }
    if(c==0)
    {
        cout<<"Not Found"<<endl;
    }


    // binary search
    cout<<"Binary Search"<<endl;
    sort(arr,arr+siz);
    int pos = binarySearch(arr,search_value,0,siz-1);
    if(pos!=-1)
    {
        cout<<"Found at index : "<<pos<<"\t position: "<<pos+1<<"\t Value: "<<arr[pos]<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

}
