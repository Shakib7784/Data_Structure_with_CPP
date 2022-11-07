#include<bits/stdc++.h>
using namespace std;

void final_sort(stack<int>&store, int val)
{
    if(store.empty() || store.top()>val)
    {
        store.push(val);
        return;
    }
    int Top=store.top();
    store.pop();
    final_sort(store,val);
    store.push(Top);
}

void sort_stack(stack<int>&srt)
{
    if(srt.empty())
    {
        return;
    }
    int Top = srt.top();
    srt.pop();
    sort_stack(srt);
    final_sort(srt,Top);
}
void display(stack<int>&d)
{
    while(!d.empty())
    {
        cout<<d.top()<<" ";
        d.pop();
    }
}
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int v;
        cin>>v;
        s.push(v);
    }
    sort_stack(s);
    display(s);

}
