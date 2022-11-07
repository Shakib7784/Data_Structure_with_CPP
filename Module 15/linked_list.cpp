#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value=val;
        Next=NULL;
    }
};
void insertintail(Node* &he, int v)
{
    Node *newnode = new Node(v);
    if(he==NULL)
    {
        he=newnode;
        return;
    }
    else
    {
        Node *temp = he;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=newnode;
    }
}
void Display(Node *h)
    {
        while(h!=NULL)
        {
            cout<<h->value<<endl;
            h=h->Next;
        }
    }
int main()
{
    Node *Head=NULL;
   cout<<"how many value do you want to insert?"<<endl;
   int n;
   cin>>n;
   cout<<"insert values: "<<endl;

   while(n--)
   {
       int t;
       cin>>t;
       insertintail(Head,t);
   }
   Display(Head);

}
