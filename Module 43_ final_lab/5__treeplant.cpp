#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y==1)
    {
        cout<<"1"<<endl;
    }
    else if(y==2)
    {
        cout<<"2"<<endl;
    }
    else
    {
        long long int res = (pow(2,y-1)) * (pow(2,y-2));
        cout<<res<<endl;
    }
}
