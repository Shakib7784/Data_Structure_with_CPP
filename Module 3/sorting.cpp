#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={4,77,2,9,6,33,4};
    sort(a,a+7);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
