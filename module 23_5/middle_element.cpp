#include<bits/stdc++.h>
#include "template.h"
using namespace std;
void delete_middle(Stack<int>&m, int siz, int curr)
{
    if(curr==(siz/2)+1)
    {
        m.Pop();
        return;
    }
    int top = m.Top();
    m.Pop();
    delete_middle(m,siz,curr+1);
    m.Push(top);
}
void final_reverse(Stack<int>&grab,int value)
{
    if(grab.emptyy())
    {
        grab.Push(value);
        return;
    }
    int top=grab.Top();
    grab.Pop();
    final_reverse(grab,value);
    grab.Push(top);

}
void reverse_stack(Stack<int>&rev,int siz)
{
    if(siz==0)
    {
        return;
    }
    int top = rev.Top();
    rev.Pop();
    reverse_stack(rev,siz-1);
    final_reverse(rev,top);

}
int main()
{
    Stack<int>S;
    int n;
    cout<<"how much element do you want to insert ?: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter value to push"<<endl;
        int value;
        cin>>value;
        S.Push(value);
    }
    reverse_stack(S,n);
    delete_middle(S,n,1);
    cout<<"elements after deletion"<<endl;
    while(!S.emptyy())
    {
        cout<<S.Top()<<endl;
        S.Pop();
    }
}
