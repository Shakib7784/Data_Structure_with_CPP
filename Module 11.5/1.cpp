#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    string S;
    cin>>T;
    while(T--)
    {
        cin>>S;
        int c=0,c1=0;
        for(int i=0;i<=S.size();i++)
        {
            if(S[i]=='1')
            {
                c++;
            }
             if(S[i]=='1' &&S[i+1]!=0)
            {
                c1++;
            }


        }


        if(c==0)
        {
            cout<<"NO"<<endl;

        }
        else if(c==c1)
        {
            cout<<"YES"<<endl;
        }
        else if(c==S.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
              cout<<"NO"<<endl;
        }
    }
}
