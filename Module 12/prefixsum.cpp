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
        int b[n];
        b[0]=a[0];
         for(int i=1;i<n;i++)
        {
            b[i]=b[i-1]+a[i];
        }
        // suppose we need to sum of position 2 to 5 , here start is 2 and end is 5. That time we can do this
        int start, endd;
        cin>>start>>endd;
        for(int i=0;i<n;i++)
        {

            cout<<b[endd]-b[start-1];
            break;
        }
}
