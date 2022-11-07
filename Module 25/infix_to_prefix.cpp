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

string InfixToPrefix(string s)
{
    string result; // store the result
    Stack<char>Storage; //
    reverse(s.begin(),s.end()); //  reverse the string
    for(int i=0;i<s.size();i++) // traverse first to last character of string
    {
        if(s[i]>='0' && s[i]<='9') // step 1: store all integer value to the result string
        {
            result+=s[i];
        }
        else if(s[i]==')') // step 2: if got opening bracket then push it to stack.  note: after reversing now closing bracket is known as opening bracket
        {
            Storage.Push(s[i]);
        }
        else if(s[i]=='(') // step 3: store element from stack to the result variable until getting opening bracket
        {
            while(!Storage.emptyy() && Storage.Top()!=')' )
            {
                result+=Storage.Pop();
            }
            Storage.Pop(); // then we have to pop the opening bracket ). cz we only store operator and operands
        }
        else
        {
            while(!Storage.emptyy() && precision(Storage.Top())>=precision(s[i])) // step 4. checking the precedence of operator. until getting less precision of current precision pop and store to the result
            {
                result+=Storage.Pop();
            }
            Storage.Push(s[i]); // when get less precedence then push it to the stack
        }
    }
    while(!Storage.emptyy()) // after finishing traversing there can be some operator left. store them to result variable until stack get empty
    {
        result+=Storage.Pop();
    }
    reverse(result.begin(),result.end()); // finally reverse the result variable
    return result; // return result
}

int prefixEvaluation(string check)
{
    Stack<int>s;
    for(int i=check.length()-1;i>=0;i--)
    {
         // string element can be digit
         if(check[i]>='0' && check[i]<='9')
         {
             s.Push(check[i]-'0');
         }
        //string element can be operand
         else
         {
             int a=s.Pop();
             int b=s.Pop();

             switch(check[i])
             {
                case '+':
                    s.Push(a+b);
                    break;

                  case '-':
                    s.Push(a-b);
                    break;

                  case '*':
                    s.Push(a*b);
                    break;

                   case '/':
                    s.Push(a/b);
                    break;

                    case '^':
                    s.Push(pow(a,b));
                    break;

                    default:
                        break;
             }
         }
    }
        return s.Top();

}

/*string prefixEvaluation2(string check)
{
    Stack<string>s;
    for(int i=check.length()-1;i>=0;i--)
    {
         // string element can be digit
         if(check[i]>='a'&& check[i]<='z')
         {
             string ss=check[i];
             s.Push(ss);
         }
        //string element can be operand
         else
         {
             string a=s.Pop();
             string b=s.Pop();

             switch(check[i])
             {
                case '+':
                    s.Push(a+b);
                    break;

                  case '-':
                    s.Push(a-b);
                    break;

                  case '*':
                    s.Push(a*b);
                    break;

                   case '/':
                    s.Push(a/b);
                    break;

                    case '^':
                    s.Push(pow(a,b));
                    break;

                    default:
                        break;
             }
         }
    }
        return s.Top();

}*/

int main()
{
       string s = " (5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
       string result = InfixToPrefix(s);
       cout<<result<<endl;
       cout<<"calculation of prefix"<<endl;
        int cal = prefixEvaluation(result);
        cout<<cal<<endl;

        // for string

       /* string s2 = "(a-b/c)*(a/k-1");
        string result2 = InfixToPrefix(s2);
        cout<result2;
         cout<<"calculation of prefix"<<endl;
         string cal2 = prefixEvaluation2(result2);
         cout<<result2;*/
}

