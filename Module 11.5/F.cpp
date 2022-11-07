#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int S[N],T[N];
    for(int i=0;i<N;i++)
    {
        cin>>S[i]>>T[i];
    }
   vector<int>P;
   vector<int>q;
   vector<int>u;
   int sum1=0,sum2=0;
   for(int i=0;i<N;i++)
   {
       sum1= sum1+S[i];
       q.push_back(sum1);
       sum2=sum2+T[i];
       u.push_back(sum2);
       int y = abs(sum1-sum2);
       P.push_back(y);
   }
   int mm=0;
   for(int i=0;i<N;i++)
   {
       mm=max(mm,P[i]);
   }
//with linear search
  for(int i=0;i<N;i++)
  {
      if(P[i]==mm)
      {
          if(q[i]>u[i])
          {
              cout<<"1"<<" "<<mm;
              break;
          }
          else if(q[i]<u[i])
          {
              cout<<"2"<<" "<<mm;
              break;
          }
      }
  }


}
