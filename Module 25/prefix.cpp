# include<bits/stdc++.h>
#include"template.h"
using namespace std;
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
int main()
{
        int result = prefixEvaluation("-+7*45+20");
        cout<<result<<endl;
}
