#include<bits/stdc++.h>
using namespace std;
int xpowern(int x,int n)
{
    if(n==0 )
    {
        return 1;
    }
    if(x==0)
    {
        return 0;
    }
    int xpownmin1 = xpowern(x,n-1);
    int res = x*xpownmin1;
    return res;
}
//better way;
/*int xpower(int x,int n)
{
     if(n==0 )
    {
        return 1;
    }
    if(x==0)
    {
        return 0;
    }
    return x*xpower(x,n-1); // it will work like thie 2* [ 4     3   2    1    0 ]
                                            //            we will get  2*[16    8   4     2   1  ] => finally 2*16= 32;
}*/
// more better way. stack level is logn
int xpower(int x,int n)
{
     if(n==0 )
    {
        return 1;
    }
    if(x==0)
    {
        return 0;
    }
    if(n%2==0)
    {
        return xpower(x,n/2)*xpower(x,n/2);
    }
    else
    {
        return xpower(x,n/2)*xpower(x,n/2)*x;
    }
}

int main()
{
    int x,n;
    cin>>x>>n;
  // int result= xpowern(x,n);
  int result = xpower(x,n);
   cout<<result<<endl;
}
