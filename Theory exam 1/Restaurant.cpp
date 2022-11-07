#include<bits/stdc++.h>
using namespace std;
//part 1
class Restaurant
{
public:
    int food_item_code[12];
    string food_item_names[12];
    int food_item_price[12];
    int total_tax;
  Restaurant(  )
   {
        total_tax =0;

    }
};

int main()
{
    Restaurant *Res = new Restaurant();

    //part 2
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Res->food_item_code[i];
        getchar();
        getline(cin,Res->food_item_names[i]);
        cin>>Res->food_item_price[i];
    }


    //part 3
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t MAKE BILL"<< endl<<endl;
    cout<<"Item Code \t\t"<<"Item Name\t\t\t\t"<<"Item Price"<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<Res->food_item_code[i]<<"\t \t\t";
        cout<<Res->food_item_names[i]<<"\t \t \t";
        cout<<Res->food_item_price[i];
        cout<<endl;
    }


    //part 4
    cout<<endl<<endl<<endl;
    int table_no,number_of_items;
    cout<<"Enter Table No : ";
    cin>>table_no;

    cout<<"Enter Number of Items : ";
    cin>>number_of_items;
    int code[number_of_items], quantity[number_of_items];
    for(int i=1;i<=number_of_items;i++)
    {
        cout<<"Enter Item "<<i<<" Code : ";
        cin>>code[i];
        // part 8
        int match=0;
        for(int j=0;j<n;j++)
        {
             if(code[i]==Res->food_item_code[j])
             {
                 match++;
                 break;

             }
        }


        if(match==0)
        {
            cout<<"This code is not valid. Enter code again"<<endl;
            i--;
        }
      else
        {
            cout<<"Enter Item "<<i<<" Quantity : ";
            cin>>quantity[i];
        }

    }

    //part 5
    cout<<endl<<endl;
    int Total_price, sum_total =0;
    double tax;
     cout<<"\t\t\t\t\t\t\tBiLL SUMMARY"<< endl<<endl;
    cout<<"Table NO. : "<<table_no<<endl;
    cout<<"Item Code\t\t"<<"Item Name\t\t\t\t"<<"Item Price\t\t"<<"Item Quantity\t\t"<<"Total Price"<<endl;
     for(int i=1;i<=number_of_items;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(code[i]==Res->food_item_code[j])
            {
                cout<<Res->food_item_code[j]<<"\t\t\t";
                cout<<Res->food_item_names[j]<<"\t\t\t";
                cout<<Res->food_item_price[j]<<"\t\t\t";
                cout<<quantity[i]<<"\t\t\t";
                Total_price = quantity[i] * Res->food_item_price[j];
                sum_total = sum_total+Total_price;

                cout<<Total_price;
                cout<<endl;
            }
        }
    }

    //part 6
     tax = (sum_total*5)/(double)100;
    cout<<"Tax\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<tax<<endl;
    cout<<"____________________________________________________________________________________________________________________________"<<endl;
    double net_total;
    net_total = sum_total+tax;
    cout<<"Net Total\t\t\t\t\t\t\t\t\t\t\t\t\t"<<net_total<<" Taka"<<endl;

    // part 7
    Res->total_tax += tax;


}
