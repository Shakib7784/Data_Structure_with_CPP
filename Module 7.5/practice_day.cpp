#include<bits/stdc++.h>
using namespace std;
class Shop
{
    public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
    int n;
    Shop(int n,string  name[],int price[],int quantity[])
    {
        this->n=n;
        for(int i=1;i<=n;i++)
        {
            product_name[i]=name[i];
            product_price[i]=price[i];
            product_quantity[i]=quantity[i];
        }
    }
private:
    int total_income;
public:
    int set_income(int total_income)
    {
        this->total_income=total_income;
    }
    int show_income()
    {
        return this->total_income;
    }
   // int n,a;
    //void get_info();
   //void show_info();
  /* void calculate(int a)
    {

        cout<<"which product do you want? from 1 to"<<n;
        this->a=a;

        cout<<this->a;

    }*/


};
/*void Shop:: get_info()
    {

         cout<<"No of Product"<<endl;
         cin>>n;
        for(int i=1;i<=n;i++)
         {
             cout<<"Product "<<i<<" Name: ";
             cin>>product_name[i];
             cout<<"Product "<<i<<" Price: ";
             cin>>product_price[i];
             cout<<"Product "<<i<<" Quantity:: ";
             cin>>product_quantity[i];
         }


    }
    void Shop::show_info()
    {
        cout<<"\t\tBUY PRODUCT"<<endl;
        cout<<"\t\t ____________________\t\t"<<endl;

          cout<<"product Index \t\t";
             for(int i=1;i<=n;i++)
             {
                    cout<<i<<"\t";
             }
             cout<<endl;
             cout<<"product Name \t\t";
              for(int i=1;i<=n;i++)
             {
                    cout<<product_name[i]<<"\t";
             }
             cout<<endl;

         cout<<"product Price \t\t";
              for(int i=1;i<=n;i++)
             {
                    cout<<product_price[i]<<"\t";
             }
             cout<<endl;

            cout<<"product Quantity \t";
              for(int i=1;i<=n;i++)
             {
                    cout<<product_quantity[i]<<"\t";
             }
             cout<<endl;
    }*/

Shop *s(int n)
{
    cout<<"provide name , price , quantity for product no "<<n;
    string name[10];
    int pricce[10], quantity[10];
    for(int i=0;i<1;i++)
    {
        cin>>name[i]>>price[i]>>quantity[i];
    }
    Shop *s = new Shop()
}
int main()
{

    int n;
    cout<<"Number of  product"<<endl;
    cin>>n;
    Shop *s[n];
    for(int i=1;i<=n;i++)
    {

    }



}
