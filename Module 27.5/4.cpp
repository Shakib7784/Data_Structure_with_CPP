#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>ch;
    int c=0;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' )
        {
            ch.push(s[i]);
             if(c>0)
            {
                v.push_back(c);
            }

            c++;

        }
        else if(s[i]==')')
        {
            ch.pop();
            c=0;

        }
    }
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<endl;
  }
}

