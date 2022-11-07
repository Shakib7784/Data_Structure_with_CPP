#include<bits/stdc++.h>
using namespace std;
int main()
{
    int siz;
    cout<<"Give array size: "<<endl;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    char c;
    cout<<"Do you want to search? (Y/N)"<<endl;
    cin>>c;
    while(toupper(c)=='Y')
    {
                 //searching with not unique value.
            int check;
            cout<<"which value do you want to search: "<<endl;
            cin>>check;
            int flag=0;
            for(int i=0;i<siz;i++)
            {
                if(arr[i]==check)
                {
                    cout<<"index Number: "<<i<<"\t"<<"position: "<<i+1<<"\t"<<"value: "<<arr[i]<<endl;
                    flag++;
                }
            }
            if(flag==0)
            {
                cout<<"Value is not found"<<endl;
            }

            cout<<"Do you want to Continue? (Y/N)"<<endl;
            cin>>c;
    }

}
