#include<bits/stdc++.h>
using namespace std;
int main()
{
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        if(A*B==C*D)
        {
            cout<<A*B;
        }
        else if(A*B>C*D)
        {
            cout<<A*B;
        }
        else
        {
            cout<<C*D;
        }
}

