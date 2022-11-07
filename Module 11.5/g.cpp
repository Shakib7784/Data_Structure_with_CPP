#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        int H[N];
        for(int i=0;i<N;i++)
        {
            cin>>H[i];
        }
        //sorting
        for(int i=1;i<N;i++)
        {
            int key=H[i];
            int j=i-1;
            while(j>=0&&H[j]<key)
            {
                H[j+1]=H[j];
                j--;
            }
            H[j+1]=key;
        }

        // print array
        for(int i=0;i<N;i++)
        {
            cout<<H[i]<<" ";
        }
        cout<<endl;
        int c=0;
         for(int i=0;i<N;i++)
        {
            if(H[i]>K)
            {
                c++;
            }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
}
}
