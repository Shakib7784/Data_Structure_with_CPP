#include<bits/stdc++.h>
using namespace std;
int prefix_calculation(string ss)
{
    stack<int>store;
    for(int i=ss.size()-1;i>=0;i--)
    {
        if(ss[i]>='0' &&ss[i]<='9')
        {
            store.push(ss[i]-'0');
        }
        else
        {
            int a=store.top();
            store.pop();
            int b = store.top();
            store.pop();
            switch(ss[i])
            {
            case '+':
                store.push(a+b);
                break;

                case '-':
                store.push(a-b);
                break;

                 case '*':
                store.push(a*b);
                break;

                 case '/':
                store.push(a/b);
                break;

                 case '^':
                store.push(pow(a,b));
                break;


            }
        }
    }
    return store.top();
}
int main()
{
    string s;
    cin>>s;
    int res = prefix_calculation(s);
    cout<<res;
}
