#include<bits/stdc++.h>
using namespace std;
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

         int lower=0,upper=siz-1,mid;

        int c=0;
        if (lower<=upper)
        {
                    for(int i=0;i<siz;i++)
             {
                 mid=(lower+upper)/2;
                 if(arr[mid]==check)
                 {
                      cout<<"index Number: "<<mid<<"\t"<<"position: "<<mid+1<<"\t"<<"value: "<<arr[mid]<<endl;
                      break;
                 }
                 else if(check>arr[mid])
                 {
                     lower=mid+1;

                 }
                 else if(check<arr[mid])
                 {
                     upper=mid-1;

                 }
                 c++;
             }
        }
        else
        {
            cout<<"invalid";
        }


}
