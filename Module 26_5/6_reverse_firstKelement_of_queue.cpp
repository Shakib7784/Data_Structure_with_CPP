#include<bits/stdc++.h>
#include"queue_header_file.h"
using namespace std;
void reverse_K_element (Queue<int>&q, int pos)
{
        stack<int>s;
        for(int i=0;i<pos;i++)
        {
            s.push(q.FronT());
            q.Pop();
        }
        // passing rest of the element to another queue

        Queue<int>second;
        while(!q.emptyy())
        {
            second.Push(q.FronT());
            q.Pop();
        }
        // insert first reversed k element into queue from stack
        while(!s.empty())
        {
            q.Push(s.top());
            s.pop();
        }
        //insert second part of queue into main queue

        while(!second.emptyy())
        {
            q.Push(second.FronT());
            second.Pop();
        }
        // we can do it by another approach . instead of taking an extra queue and push second part. we can do it with same queue.
        // at first we have to push from stack into main queue then we will get elements like 5 6 7-> 4 3 2 1
        // now we can do
        // q.push(q.front))
        // q.Pop();
        // into same queue. here 5 will go to the end , then 6, then 7  .
        // finally we will get 4 3 2 1 5 6 7
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
    // taking value into queue from 1 to number
    Queue<int>q;
    int N,K;
    cin>>N>>K;
    for(int i=1;i<=N;i++)
    {
        int val;
        cin>>val;
        q.Push(val);
    }
    reverse_K_element(q,K);
    display(q);

}
