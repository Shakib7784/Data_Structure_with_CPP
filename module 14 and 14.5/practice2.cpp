
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>show, int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<show[i]<<" ";
    }
    cout<<endl;
}
int main()
{
     int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    vector<int>major;
    vector<int>minor;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                major.push_back(a[i][j]);
            }
             if((i+j)==n-1)
            {
                minor.push_back(a[i][j]);
            }
        }
    }
  //  int s=major.size()
  cout<<"Major: "<<endl;
    print(major,major.size());

   cout<<"Minor: "<<endl;
     print(minor,minor.size());

}
