#include<bits/stdc++.h>
using namespace std;
template<typename T>// the way of declaration of templete
T findmax(T a, T b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<findmax<int>(3,5)<<endl; // we have to give name of data type after function name
     cout<<findmax<float>(8.5,5.7)<<endl;
      cout<<findmax<char>('w','d')<<endl;

}
