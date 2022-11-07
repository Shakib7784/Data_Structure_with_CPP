#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)

    {
        b[i]=a[i];
    }
    //sorting
    for(int i=1;i<n;i++)
    {

        int key=b[i];
        int j=i-1;
        while(j>=0&&b[j]>key)
        {
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=key;
    }
    for(int i=0;i<n/2;i++)
    {
        if(a[i]==a[i+1])
        {
            cout<<i+1<<" "<<n-1-i<<endl<<endl;
        }
        else
        {
            for(int j=0;j<n;j++)
       {
           if(b[i]==a[j])
           {
              cout<<j+1<<" ";
           }
            if(b[n-i]==a[j])
                  {
                      cout<<j+1<<endl<<endl;
                  }
       }
        }

    }

}
