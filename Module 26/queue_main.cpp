#include<bits/stdc++.h>
#include"queue_header_file.h"
using namespace std;
int main()
{
    //typedef pair<int,int>mypair;
    Queue<pair<int,char>>q;
    int n;
    cout<<"How much value do you want"<<endl;
    cin>>n;
    while(n--)
    {
        int a;
        char b;
        cin>>a>>b;
        q.Push(make_pair(a,b));
    }
    if(!q.emptyy())
    {
        cout<<"Front : "<<q.FronT().first<<" "<<q.FronT().second<<endl;
        cout<<"Back : "<<q.Back().first<<" "<<q.Back().second<<endl;
    }
    while(!q.emptyy())
    {
//        pair<int,int>ss;
//        ss= q.FronT();
//        cout<<ss.first<<" "<<ss.second<<endl;
        cout<<q.FronT().first<<" "<<q.FronT().second<<endl;
        q.Pop();
    }
}
