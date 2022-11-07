#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={3,4,8,1,9};
        int m=arr[0];
    for (int i=1;i<5;i++)
    {
        m=max(m,arr[i]);

    }
    cout<<m;

}
