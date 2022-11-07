#include<bits/stdc++.h>
#include"stack_template.h"
using namespace std;
void reverse_stack(Stack<int> &grab, int value)
{
      if(grab.emptyy())
      {
          grab.push(value);
          return;
       }
      int topelement = grab.Top();
      grab.pop();
      reverse_stack(grab,value);
      grab.push(topelement);

}

void recursive_stack(Stack<int> &ss)
{
        if(ss.emptyy())
        {
            return;
        }
         int topelement = ss.Top();

        ss.pop();
        recursive_stack(ss);
        reverse_stack(ss,topelement);
}
int  main()
{
    Stack<int>s;

    s.push(1);
    s.push(2);
     s.push(3);
    s.push(4);
    s.push(5);
    recursive_stack(s);
    while(!s.emptyy())
    {
        cout<<s.Top()<<endl;
        s.pop();
    }
}
