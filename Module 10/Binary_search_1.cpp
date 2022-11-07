#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int check,int lower,int upper)
{
    if(lower<=upper)
    {
        int mid=(lower+upper)/2;
        if(a[mid]==check)
        {
            return mid;
        }
        else if (a[mid]<check)
        {
            binarySearch(a,check,mid+1,upper);
        }
        else
        {
            binarySearch(a,check,lower,mid-1);
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
    cout<<"Give array size: "<<endl;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
      int check;
            cout<<"which value do you want to search: "<<endl;
            cin>>check;

         int index = binarySearch(arr,check,0,siz-1);
         if(index!=-1)
         {
             cout<<"index: "<< index<<"\t"<<"Position: "<<index+1<<"\t"<<"Value: "<<arr[index];
         }
         else
         {
             cout<<"value is not exist"<<endl;
         }

}
