#include<bits/stdc++.h>
using namespace std;

void factorial(int siz,int m)
{
    if(siz==0)
    {
        cout<<m<<endl;
        return;
    }
    m=m*siz;
    factorial(siz-1,m);
}
// another way
int factorial2(int siz)
{
    if(siz==1||siz==0)
    {
        return 1;
    }
    int fact_num = factorial2(siz-1);//4,3,2,1-> reverse 1.2,6,24
    int res = siz*fact_num;
    return res;
    //return siz*factorial2(siz-1);
}
int main()
{

    int sizee;
    cout<<"enter size: "<<endl;
    cin>>sizee;
    int mul=1;
   // factorial(sizee,mul);
   int result = factorial2(sizee);
   cout<<result;



}

