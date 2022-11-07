# include<bits/stdc++.h>
#include"template.h"
using namespace std;
int precision(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
     else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string InfixToPostfix(string s)
{
    string result;
    Stack<char>Storage;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9') // step 1: store all integer value to the result string
        {
            result+=s[i];
        }
        else if(s[i]=='(')
        {
            Storage.Push(s[i]);
        }
        else if(s[i]==')')
        {
           while(!Storage.emptyy() && Storage.Top()!='(')
           {
               result+=Storage.Pop();
           }
           Storage.Pop();
        }
        else
        {
            while(!Storage.emptyy() && precision(Storage.Top())>=precision(s[i]))
            {
                result+=Storage.Pop();
            }
            Storage.Push(s[i]);
        }
    }
    while(!Storage.emptyy())
    {
         result+=Storage.Pop();
    }
    return result;
}
int Postfix_Calculation(string s)
{
    Stack<int>T;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            T.Push(s[i]-'0');
        }
        else
        {
            int a=T.Pop();
            int b=T.Pop();
            switch(s[i])
            {
            case '+':
                T.Push(a+b);
                break;

                case '-':
                T.Push(abs(a-b));
                break;

                case '*':
                T.Push(a*b);
                break;

                case '/':
                T.Push(a/b);
                break;

                case '^':
                T.Push(pow(a,b));
                break;

                default:
                    break;

            }
        }
    }
    return T.Top();
}

int main()
{
    string ss = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4)) ";
    string result = InfixToPostfix(ss);
    cout<<result<<endl;
    cout<<"Result after calculation"<<endl;
    int r = Postfix_Calculation(result);
    cout<<r<<endl;
}
