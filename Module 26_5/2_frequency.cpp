#include<bits/stdc++.h>
#include"queue_header_file.h"
using namespace std;
int main()
{
    Queue<int>q;
    Queue<int>store;
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.Push(val);
    }
    int M;
    cout<<"enter value of M"<<endl;
    cin>>M;
    vector<int>s;
    for(int i=0;i<M;i++)
    {
        store = q;
        int Mval;
        cin>>Mval;
        int c=0;
        while(!store.emptyy())
        {
            if(Mval==store.FronT())
            {
                c++;
            }
            store.Pop();
        }
//        for(int i=0;i<store.sizee();i++)
//        {
//
//        }
        if(c==0)
        {
            s.push_back(-1);
        }
        else
        {
              s.push_back(c);
        }

    }
    for(int k=0;k<s.size();k++)
    {
        cout<<s[k]<<endl;
    }
}
