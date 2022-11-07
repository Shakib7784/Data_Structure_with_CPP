#include<bits/stdc++.h>
#include"queue_header_file.h"
using namespace std;
void reverse_queue(Queue<int>&q)
{
    stack<int>s;
    while(!q.emptyy())
    {
        s.push(q.FronT());
        q.Pop();
    }
    while(!s.empty())
    {
        q.Push(s.top());
        s.pop();
    }
}
void display(Queue<int>&d)
{
    while(!d.emptyy())
    {
        cout<<d.FronT()<<" ";
        d.Pop();
    }
}
int main()
{
     Queue<int>store;
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        store.Push(val);
    }
    reverse_queue(store);
    display(store);


}
