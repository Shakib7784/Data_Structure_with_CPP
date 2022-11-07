#include<bits/stdc++.h>
#include"queue_header_file.h"
using namespace std;
int main()
{
    // taking value into queue from 1 to number
    Queue<int>q;
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        q.Push(i);
    }

    Queue<string>store;
// finding binary for each number of queue
    while(!q.emptyy())
    {
        string s;
        int number = q.FronT(); // holding font number of queue
        while(number!=0) // make that number binary
        {
            int rem=number%2;
            s+= to_string(rem); // we store binary result from bottom to top that's why we need to reverse the string s
            number=number/2;
        }
       reverse(s.begin(),s.end());

        store.Push(s); // store binary number of that decimal number to the store queue

        q.Pop(); // pop the first element
    }
    // print binary numbers of decimal numbers
    while(!store.emptyy())
    {
        cout<<store.FronT()<<" ";
        store.Pop();
    }
}
