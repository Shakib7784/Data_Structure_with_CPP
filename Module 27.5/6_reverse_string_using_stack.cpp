#include<bits/stdc++.h>
using namespace std;
void final_revarse(stack<char>&fr, char val)
{
    if(fr.empty())
    {
        fr.push(val);
        return;
    }
    char Top = fr.top();
    fr.pop();
    final_revarse(fr,val);
    fr.push(Top);
}
void reverse_string(stack<char>&ch)
{
    if(ch.empty())
    {
        return;
    }
    char Top = ch.top();
    ch.pop();
    reverse_string(ch);
    final_revarse(ch,Top);
}
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

}
