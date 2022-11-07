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
    int m=arr[0], index=0;
  for(int i=1;i<siz;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
            index=i;
        }
    }
    // with stl function
   /* for(int i=1;i<siz;i++)
    {
        m = max(m,arr[i]);
        // with stl function we can't find index number
    } */
     cout<<"Max: "<<m<<", Index: "<<index<<endl;
     int mi=arr[0];
      index=0;
    for(int i=1;i<siz;i++)
    {
        if(mi>arr[i])
        {
            mi=arr[i];
            index=i;
        }
    }
    // with stl function
   /* for(int i=1;i<siz;i++)
    {
       mi=min(mi,arr[i]);
       index=i;
    }*/
     cout<<"Min: "<<mi<<", Index: "<<index;

}


