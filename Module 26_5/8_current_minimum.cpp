#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<int >store;
    int mi = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=mi)
        {
            mi=arr[i];
            store.push(mi);
        }

       s.push(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(s.top()!=store.top())
        {
            cout<<store.top()<<" ";
            s.pop();
        }
        else
        {
            cout<<store.top()<<" ";
            s.pop();
            store.pop();
        }
    }

}
