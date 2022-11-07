#include<bits/stdc++.h>
using namespace std;
int binarysearch(int A[],int searchvalue,int up,int low)
{
    if(low<=up)
    {
        int mid=(up+low)/2;
        if(searchvalue==A[mid])
        {
            return mid;
        }
        else if(A[mid]<searchvalue)
        {
            return binarysearch(A,searchvalue,up,mid+1);
        }
        else if(A[mid]>searchvalue)
        {
            return binarysearch(A,searchvalue,mid-1,low);
        }
    }
    else
        return -1;
}
int main()
{
    int N,K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

    int result = binarysearch(A,K,N-1,0);
    if(result==-1)
    {
        cout<<"value does not found"<<endl;
    }
    else
        cout<<result+1<<endl;

}

