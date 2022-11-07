#include<bits/stdc++.h>
using namespace std;
void fibo(int first,int second,int siz)
{
    if(siz==0)
    {

        return;
    }
    if(first==0)
    {
        cout<<first<<endl<<second<<endl;
    }
    int result =second+first;
    cout<<result<<endl;
   // first =second;
    //second=result;
    fibo(second,result,siz-1);
}
int main()
{
    int siz;
    cin>>siz;
    fibo(0,1,siz);
}
