#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ma=a[0];
    // step one=> finding max
    for(int i=0;i<n;i++)
    {
        ma=max(ma,a[i]);
    }
    // step 2 => set count
    int coun[ma+1]={0};
    // step 3 => frequency counting
    for(int i=0;i<n;i++)
    {
        coun[a[i]]++;
    }
    //step 4=> finding prefix sum from count array and store prefix sum into count array
  //  int presum[ma+1];
    int sum=0;
    for(int i=0;i<ma+1;i++)
    {
      //  sum=sum+coun[i];
       //coun[i]=sum;
       coun[i]+=coun[i-1];
    }
    // step 5=> declare a new array. do backward traverser. store value of array(a) into final of position count array -1 .
    // suppose n=7. that means if we have value 4 in the positon of coun[n-1]=> coun [8-1]=>coun[7] = 4;
    // then fina[4] = a[i] means fina[4] = a[8] . 4 number position of fina will hold value of a[8]
    int fina[n];
    for(int i=n-1;i>=0;i--)
    {
       // fina[coun[a[i]-1]]=a[i];
       coun[a[i]]--;
       int k=coun[a[i]] ;
       fina[k]=a[i];
       cout<<fina[k]<<" ";

    }
    for(int i=0;i<n;i++)
    {
        cout<<fina[i]<<endl;
    }
}
