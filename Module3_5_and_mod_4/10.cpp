#include<bits/stdc++.h>
using namespace std;
int main()
{
    string O,E;
    cin>>O>>E;
    int m=max(O.size(),E.size());

    string res;
    for(int i=0;i<m;i++ )
    {
        res=res+O[i]+E[i];
    }
    cout<<res;

}


