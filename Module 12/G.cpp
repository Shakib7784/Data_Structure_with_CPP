#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
        int sum=0;
        for(int i=N;i!=0;i=i/10)
        {
            sum = sum*10+(i%10);
        }
       if(sum==N)

           cout<<"Yes";

       else
        cout<<"No";

}

