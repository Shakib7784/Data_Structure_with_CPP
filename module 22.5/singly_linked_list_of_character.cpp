#include<bits/stdc++.h>
using namespace std;

class Node
{
public :
    char value;
    Node *Next;
    Node(char v)
    {
        value=v;
        Next=NULL;
    }
};
Node* reverse_second_half(Node *&head);
bool compare(Node *&first, Node *& second);
void insert_at_tail(Node *&head,char value)
{
    Node *newnode = new Node(value);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
            Node *temp = head;
            while(temp->Next!=NULL)
            {
                temp=temp->Next;
            }
            temp->Next=newnode;
    }
}
void display(Node *&head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value<<endl;
            temp=temp->Next;
        }
    }
}
void find_mid(Node *&head)
{
     Node *fast=head;
     Node *slow=head;
     Node *first_half =head;
     while(fast!=NULL &&fast->Next!=NULL)// finding mid using two pointer. fast!=NULL condition is for even size of linked list
     {
         fast=fast->Next->Next;
         first_half=slow; // we have to split linked list into first and second part. we know slow pointer points middle .if we want first part that time we need previous element of slow
         slow=slow->Next;
     }
     if(fast!=NULL) // we need second part . slow is indication middle element for odd numbers. so we need the next element of middle for odd elements. for even it is ok with current value of slow. cz if our size is 6 slow is indicating 4 now
     {
         slow=slow->Next;
     }
     Node *second_half = slow; // separating  second part
    first_half->Next=NULL; // separating first part by keeping NULL end of it.
    second_half=reverse_second_half(second_half); // calling second part after reverse
//    cout<<"display second Half"<<endl;
//    display(second_half);
     bool result=   compare(head,second_half);
     if(result==1)
     {
         cout<<"true"<<endl;
     }
     else
     {
         cout<<"false"<<endl;
     }
}

// reversing second part of linked list
 Node* reverse_second_half(Node *&head)
 {
     if(head==NULL || head->Next==NULL)
     {
         return head;
     }
     Node *newhead = reverse_second_half(head->Next);
     head->Next->Next=head;
     head->Next=NULL;
     return newhead;
 }

bool compare(Node *&first, Node *& second)
{
    Node *temp1=first;
    Node *temp2 = second;
    while(temp1!=NULL)
    {
        if(temp1->value!=temp2->value)
        {
            return false;
        }
        temp1=temp1->Next;
        temp2=temp2->Next;
    }
    return true;
}
int main()
{
   Node *head = NULL;
   int n;
   cout<<"enter total number of elements"<<endl;
   cin>>n;
   while(n--)
   {
       char v;
       cin>>v;
       insert_at_tail(head,v);
   }
   find_mid(head);

}
