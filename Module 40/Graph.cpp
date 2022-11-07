#include<bits/stdc++.h>
using namespace std;
class Graph
{
   typedef pair<int,int>edgewidthpair;
     int node;
     list <edgewidthpair> *adj;
 public:
    Graph(int node)
    {
        this->node= node;
        adj = new list<edgewidthpair> [node];
    }
    void addEdge(int u, int v,int w )
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void printNeighbour ( int check)
    {
        cout<<check<<" : ";
       for(auto res=adj[check].begin(); res!= adj[check].end();res++)
        {
            // here res ++ means that it will hold next value of adj, it will not increment by 1.

            cout<<"( "<<(*res).first<<" , "<<(*res).second<<" )";
        }


    }

    void BFS( int source)
    {
        vector<bool>visited(node,false);
        queue<int>q;
        visited[source]=true;
        q.push(source);
        while(!q.empty())
        {
            int value = q.front();
            cout<<value<<" ";
            q.pop();
            for(auto element: adj[value])
            {
                int p = element.first;
                if(visited[p]!=true)
                {
                    visited[p]=true;
                    q.push(p);
                }
            }
        }
    }
};
int main()
{
    int node,edge,source;
    cin>>node>>edge>>source;
    Graph g(node);
    for(int i=0;i<edge;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g.addEdge(u,v,w);

    }

    for(int i=0;i<node;i++)
    {
        g.printNeighbour(i);
        cout<<endl;
    }
cout<<endl<<endl;

g.BFS(source);

}


/*
7 10 0
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8



*/
