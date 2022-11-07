#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(m<a[i])
        {
            m=a[i];
        }
    }
   int countt[m+1]={0};
   for(int i=0;i<n;i++)
   {
       countt[a[i]]++;
   }
   for(int i=1;i<m+1;i++)
   {
       if(countt[i]>0)
       {
           cout<<i<<"=>"<<countt[i]<<endl;
       }
   }
}
