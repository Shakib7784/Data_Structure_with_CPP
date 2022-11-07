#include<bits/stdc++.h>
using namespace std;

int reverse_first(int x[],int s)
{

}
/*int reversenum(int a, int siz)
{

    if(siz==0)
    {
        return sum;
    }
   sum = sum+a;
   a++;
   siz--;
    reversenum(a,siz);


}*/
void recursive_sum(int n,int siz,int sum)
{
    if(n>siz)
    {
        //sum=sum+n;
        cout<<sum<<endl;
        return;
    }

    sum=sum+n;
   // n++;
    recursive_sum(n+1,siz,sum);
    cout<<n<<endl;
}
int main()
{
    int num =1;
    int sizee;
    cout<<"enter size: "<<endl;
    cin>>sizee;
 recursive_sum(num,sizee,0);

}
