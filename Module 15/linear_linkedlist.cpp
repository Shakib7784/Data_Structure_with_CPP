#include<bits/stdc++.h>
using namespace std;
class Shakib
{
public:
    int value;
    Shakib *Next;
    Shakib(int val)
    {
        value=val;
        Next=NULL;
    }
};
void insertattail(Shakib* &he,int va)
{
    Shakib *newnode = new Shakib(va);
    if(he==NULL)
    {
        he=newnode;
    }
    else
    {
        Shakib *temp = he;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next = newnode;
    }
}
void insertathead(Shakib* &hee, int vvv)
{
     Shakib *newnode = new Shakib(vvv);
         newnode->Next=hee;
         hee=newnode;

}
Shakib* reversedListPrint(Shakib* &hd)
{
    Shakib *current = hd;
    Shakib *previous = NULL;
        Shakib *temp;
        while(current!=NULL)
        {
            temp=current->Next;
            current->Next=previous;
            previous=current;
            current = temp;
        }
        return previous;

}
void display(Shakib *hhhh)
{
    while(hhhh!=NULL)
    {
        cout<<hhhh->value<<endl;
        hhhh= hhhh->Next;
    }
}
int main()
{
    Shakib *head=NULL;
    cout<<"how much value do you want to insert?"<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cout<<"enter your value:"<<endl;
        cin>>t;
        char s;
        cout<<"inset  value at head or tail (h or H/ t or T)"<<endl;
        cin>>s;
        if(s=='H'||s=='h')
        {
            insertathead(head,t);
        }
        else if(s=='T'||s=='t')
        {
            insertattail(head,t);
        }
        else
        {
            cout<<"Invalid"<<endl<<"try again"<<endl;

        }
    }
      cout<<"In General order: "<<endl;
    display(head);
    cout<<"In reverse order: "<<endl;
    reversedListPrint(head);
      display(head);
}
