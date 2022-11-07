#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    // constructor creation
    Node(int val)
    {
        value=val;
        Next = NULL;
    }
};
void Display(Node *n)
{
        while(n!=NULL)
        {
            cout<<n->value<<endl;
            n=n->Next;
        }
}
void insertattail(Node* &h, int val)
{
    //create a new node
    Node *first = new Node(val);
    if(h==NULL)
    {
        h=first;
        return;
    }
    Node *temp = h;
    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }
    temp->Next=first;
}
int main()
{
    Node *head = NULL;


    char choice ='Y';
    while(choice=='Y'||choice=='y')
    {
        int n;
         cout<<"insert a new value"<<endl;
        cin>>n;
        insertattail(head,n);
        cout<<"do you wanna insert more? press Y/N"<<endl;
        cin>>choice;

    }




    Display(head);


    return 0;
}
