#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="shakib";
    s.assign("Hasan");
    s.push_back('s');
    s.pop_back();
    s.insert(2,"Hello");
    s.erase(2,5);
    cout<<s<<endl;
    string s2=" Hridoy";
    s.append(s2);
    cout<<s<<endl;
    swap(s,s2);
    cout<<s<<" "<<s2<<endl;


}
