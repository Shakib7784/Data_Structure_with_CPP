# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a+2,a+n-2);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
