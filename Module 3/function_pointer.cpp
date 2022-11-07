#include<bits/stdc++.h>
using namespace std;
void print(int **x)
{
    **x=9;
}
int main()
{
    int a=100;
    int *p=&a;
    int **q=&p;
    print(q);
    cout<<a;
}
