#include<bits/stdc++.h>
#include"stack_template.h"
using namespace std;
void reversestack(string s)
{

    Stack<string>st;
   // vector<string>st;

    for(int i=0;i<s.size();i++)
    {
         string ss="";
         while(i<s.size() && s[i] !=' ')
         {
             ss=ss+s[i];
             i++;
         }
         //st.push_back(ss);
         st.push(ss);
    }
/*for(int i=st.size()-1;i>=0;i--)
{
    cout<<st[i];
    if(i>0)
        cout<<" ";
}*/
    while(!st.emptyy())
    {
        cout<<st.Top()<<" ";
        st.pop();
    }
}
int main()
{
    string s;
    getline(cin,s);
    reversestack(s);

}
