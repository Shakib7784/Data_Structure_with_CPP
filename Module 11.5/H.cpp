#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[n];
        //storing value of a to b
         for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }

        //insertion sort
         int c=0;
        for(int i=1;i<n;i++)
        {
            int key=a[i];
            int j=i-1;

            while(j>=0&&a[j]>key)
            {
                a[j+1]=a[j];
                c++;
                j--;
            }
            a[j+1]=key;
        }
        int d=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i]==b[i])
                {
                    if(abs(i-j)>2)
                    {
                        d++;
                        break;
                    }
                }
            }
        }
        if(d>0)
        {
            cout<<"Not Allowed"<<endl;
        }
        else
        {
            cout<<c<<endl;
        }


    }
}
