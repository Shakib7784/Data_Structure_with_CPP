
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="shakib";
    cout<<s.size()<<endl;
    s.resize(2);
    cout<<s<<" "<<s.size()<<endl;
    s.clear();
    cout<<s<<" "<<s.size()<<endl;
    if(s.empty())
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



}
