#include<bits/stdc++.h>>
using namespace std;
int main()
{
    int sum=0,c=0;
    for(int i=1; ;i++)
    {
        if(i%2!=0)
        {
             sum=sum+i;
             cout<<sum<<" "<<endl;
             c++;
             cout<<c<<" "<<i<<" ";

        }
        if(c==50)
        {
            break;
        }

    }
    cout<<sum;
}
