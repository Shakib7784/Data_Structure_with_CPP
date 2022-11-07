#include<bits/stdc++.h>
#include "template.h"
using namespace std;
void final_sort(Stack<int>&fsort,int val)
{
    int top=fsort.Top();
    if(fsort.emptyy() || top>val)
    {
        fsort.Push(val);
        return;
    }
    fsort.Pop();
    final_sort(fsort,val);
    fsort.Push(top);
}

void sorted(Stack<int>&sortt)
{
    if(sortt.emptyy())
    {
        return;
    }
    int top = sortt.Top();
    sortt.Pop();
    sorted(sortt);
    final_sort(sortt, top);

}
int main()
{
    Stack<int>S;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
        S.Push(arr[i]);
    }
    sorted(S);
    while(!S.emptyy())
    {
        cout<<S.Top()<<" ";
        S.Pop();
    }

}

