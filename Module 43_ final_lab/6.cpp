#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        string s;
        cin>>s;
        vector<char>v;
        for(int i=0;i<s.size()-1;i++)
        {
            if((s[i]=='R' && s[i+1]=='B') ||(s[i]=='B' && s[i+1]=='R') )
            {
                v.push_back('p');
                i++;
            }
            else  if((s[i]=='R' && s[i+1]=='G') ||(s[i]=='G' && s[i+1]=='R') )
            {
                v.push_back('Y');
                i++;
            }
            else  if((s[i]=='B' && s[i+1]=='G') ||(s[i]=='G' && s[i+1]=='B') )
            {
                v.push_back('C');
                i++;
            }
            else if(s[i]==s[i+1])
            {
                i++;

            }
        }
        if(s.size()%2==1)
        {
            v.push_back(s[s.size()-1]);
        }

        vector<char>result;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==v[i+1])
            {
                i++;
            }
            else
            {
                result.push_back(v[i]);
            }

        }

        for(int i=0;i<result.size();i++)
        {
            cout<<result[i];
        }
        cout<<endl;

    }
}
