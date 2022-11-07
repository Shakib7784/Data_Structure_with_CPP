#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int D;
        cin>>D;
        int earn[D],spent[D];
        int sum=0;
        vector<int>left;
        for(int i=0;i<D;i++)
        {
            cin>>earn[i];
        }
        for(int i=0;i<D;i++)
        {
            cin>>spent[i];
        }
        for(int i=0;i<D;i++)
        {
            sum=sum+(earn[i]-spent[i]);
            left.push_back(sum);
        }
        vector<int>result;
        int Q;
        cin>>Q;
        while(Q--)
        {
            int x;
            cin>>x;
            if(left[x]>=0)
            {
                result.push_back(1);
            }
            else
            {
                 result.push_back(0);
            }
        }
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;

    }
}
