#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ma=a[0];
    for(int i=1;i<n;i++)
    {
        ma=max(ma,a[i]);
    }
    int freq[ma+1]={0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }

  //  int mmm=freq[0];
    for(int i=0;i<ma+1;i++)
    {
        if(freq[i]!=0)
        {
            //mmm=max(mmm,freq[i]);
            cout<<i<<"->"<<freq[i]<<endl;

        }
    }
//    cout<<n-mmm<<endl;
    }


}
