#include<bits/stdc++.h>
using namespace std;
class  Graph
{
    int node;
    typedef pair<int,int>edgeweight;
    list<edgeweight>*adj;
public:
    Graph(int node)
    {
        this->node = node;
        adj = new list<edgeweight> [node];
    }

    void storeedege(int u,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void display(int check)
    {
        cout<<check<<" : ";
        for(auto res=adj[check].begin(); res!= adj[check].end(); res++)
        {
            cout<<"( " <<(*res).first<<", "<<(*res).second<<")";
        }
    }

};
int main()
{
    int node,edge;
    cin>>node>>edge;
    Graph g(node);
    for(int i=0;i<edge;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g.storeedege(u,v,w);
    }

    for(int i=0;i<node;i++)
    {
        g.display(i);
        cout<<endl;
    }
}

