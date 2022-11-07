#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int  siz)
{
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N],B[N];

        input(A,N);

        input(B,N);
        int D[N];
        for(int i=0;i<N;i++)
        {
            D[i]=(A[i]*20)-(B[i]*10);
        }
        for(int i=1;i<N;i++)
        {
            int key=D[i];
            int j=i-1;
            while(j>=0&&D[j]<key)
            {
                D[j+1]=D[j];
                j--;
            }
            D[j+1]=key;
        }

      if(D[0]<0)
      {
          cout<<"0"<<endl;
      }
      else
      {
          cout<<D[0]<<endl;
      }
    }
}
