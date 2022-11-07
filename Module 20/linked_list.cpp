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
        Next =NULL;
    }
};
void insert_node(Node *&head, int val)
{
    Node *newnode= new Node(val);
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
void insert_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head==newnode;
    }
    else
    {
        Node *temp = head;
        head=newnode;
        newnode->Next = temp;
    }
}
void Display(Node *&head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value<<endl;
            temp=temp->Next;
        }
    }
}
int length(Node *&head)
{
    if(head==NULL)
    {
        return -1;
    }
    else
    {
        int i=1;
        Node *temp = head;
        while(temp->Next!=NULL)
        {
            i++;
            temp=temp->Next;
        }
        return i;
    }
}

//insert node by position
void insert_node_by_position(Node *&head, int pos, int val)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else
    {
        int len = length(head);
        if(pos<0 || pos>len)// question  says position starts from 0
        {
            cout<<"Invalid Position"<<endl;
        }
        else if(pos == 0)
        {
            insert_head(head,val);
        }
        else
        {
            Node *temp=head;
            int i=0;
            while(i<pos-1)
            {
                temp=temp->Next;
                i++;
            }
            Node *newnode = new Node(val);
            Node*nextnode = temp->Next;
            temp->Next = newnode;
            newnode->Next = nextnode;
        }
    }
}
void delete_node_from_head(Node*&head)
{
    if(head==NULL)
    {
         cout<<"Linked list is empty"<<endl;
    }
    else
    {
        Node *temp =head;
        head = temp->Next;
        delete(temp);
    }
}
void delete_node_by_position(Node *&head, int pos)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else
    {
        int len = length(head);
        if(pos<0 || pos>len)// question  says position starts from 0
        {
            cout<<"Invalid Position"<<endl;
        }
        else if(pos == 0)
        {
            delete_node_from_head(head);
        }
        else
        {
            Node *temp=head;
            int i=0;
            while(i<pos-1)
            {
                temp=temp->Next;
                i++;
            }
            Node * tobedeleted = temp->Next;
            Node * store = temp->Next->Next;
            temp->Next=store;
            delete(tobedeleted);
        }
    }
}
void move_tail(Node *&head)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else
    {
        Node *temp = head;
        Node * second_head = head;
        while(temp->Next->Next!=NULL)
        {
            temp=temp->Next;
        }
        head=temp->Next;
        temp->Next = NULL;
        head->Next=second_head;
    }
}
int main()
{
    Node *head=NULL;
    cout<<"enter your choice"<<endl;
    cout<<"choice 0: exist"<<endl;
    cout<<"choice 1: insert value at the end"<<endl;
    cout<<"choice 2: insert value at head"<<endl;
    cout<<"choice 3: insert value at specific position"<<endl;
    cout<<"choice 4: Delete node from head"<<endl;
    cout<<"choice 5: Delete node from a specific position"<<endl;
    cout<<"choice 6: move tail to head "<<endl;



    int choice;
    cin>>choice;
    while(choice!=0)
    {
        int value;
        int position;
        switch(choice)
        {
        case 1:
            cout<<"enter value"<<endl;
            cin>>value;
            insert_node(head,value);
            break;

        case 2:
            cout<<"enter value"<<endl;
            cin>>value;
            insert_head(head,value);
            break;
        case 3:
            cout<<"enter position"<<endl;
            cin>>position;
            cout<<"enter value"<<endl;
            cin>>value;
            insert_node_by_position(head,position,value);
            break;

        case 4:
            delete_node_from_head(head);
            cout<<"Linked list deletion"<<endl;
            Display(head);
            break;

        case 5:
            cout<<"enter position"<<endl;
            cin>>position;
            delete_node_by_position(head,position);
            cout<<"Linked list after dletion"<<endl;
            Display(head);
            break;

            case 6:
            move_tail(head);
            cout<<"Linked list now: "<<endl;
            Display(head);
            break;


        default:
            break;

        }


        cout<<"enter next choice"<<endl;
        cin>>choice;
    }

    cout<<"Linked list"<<endl;
    Display(head);
    int len = length(head);
    if(len==-1)
    {
        cout<<"Length is 0"<<endl;
    }
    else
    {
        cout<<"length of linked list is "<<len<<endl;
    }
}
