#include<bits/stdc++.h>
using namespace std;
bool make_palindrome(string ss)
{
    stack<int>s;
     int siz = ss.size();
     int mid = siz/2;
     int i=0;
     while(i<mid)
         {
             s.push(ss[i]);
             i++;
         }
         // for even number of size
     if(siz%2==0)
     {
        for(int j=i;j<siz;j++)
        {
            if(ss[j]!=s.top())
            {
                return false;
            }
            s.pop();
        }
        return true;

     }
     // for odd number of size. here mid element will not be counted
    else
     {
         for(int j=i+1;j<siz;j++)
        {
            if(ss[j]!=s.top())
            {
                return false;
            }
            s.pop();
        }
        return true;
     }
}
int main()
{
    string s;
    cin>>s;
    bool res = make_palindrome(s);
    if(res==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
