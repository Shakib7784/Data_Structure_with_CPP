#include<bits/stdc++.h>
using namespace std;
class DoublyNode
{
public:
    int value;
    DoublyNode *Next;
    DoublyNode *prev;
    DoublyNode(int val)
    {
        value=val;
        Next=NULL;
        prev=NULL;
    }
};
void insert_node(DoublyNode *&head, int val)
{
    DoublyNode *newnode= new DoublyNode(val);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        DoublyNode *temp = head;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=newnode;
        newnode->prev=temp;
    }
}
void insert_head(DoublyNode *&head, int val)
{
    DoublyNode *newnode = new DoublyNode(val);
    if(head==NULL)
    {
        head==newnode;
    }
    else
    {
        DoublyNode *temp = head;
        head=newnode;
        newnode->Next = temp;
        temp->prev=newnode;
    }
}

void Display(DoublyNode *&head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else
    {
        DoublyNode * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value<<endl;
            temp=temp->Next;
        }
    }
}
int length(DoublyNode *&head)
{
    if(head==NULL)
    {
        return -1;
    }
    else
    {
        int i=1;
        DoublyNode *temp = head;
        while(temp->Next!=NULL)
        {
            i++;
            temp=temp->Next;
        }
        return i;
    }
}

void insert_node_by_position(DoublyNode *&head, int pos, int val)
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
            DoublyNode *temp=head;
            int i=0;
            while(i<pos-1)
            {
                temp=temp->Next;
                i++;
            }
            DoublyNode  *newnode = new DoublyNode (val);
            DoublyNode   *nextnode = temp->Next;
            temp->Next = newnode;
            newnode->Next = nextnode;
            newnode->prev=temp;
        }
    }
}
void delete_node_from_head(DoublyNode*&head)
{
    if(head==NULL)
    {
         cout<<"Linked list is empty"<<endl;
    }
    else
    {
        DoublyNode *temp =head;
        head = temp->Next;
        delete(temp);
    }
}
void delete_node_by_position(DoublyNode *&head, int pos)
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
            DoublyNode *temp=head;
            int i=0;
            while(i<pos-1)
            {
                temp=temp->Next;
                i++;
            }
            DoublyNode * tobedeleted = temp->Next;
            DoublyNode * store = temp->Next->Next;
            temp->Next=store;
            store->prev=temp;
            delete(tobedeleted);
        }
    }
}
void move_head(DoublyNode *&head)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else
    {
        DoublyNode *temp = head;
        DoublyNode *secondTemp = head;
        head = temp->Next;
        //head->prev=NULL;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;

        }
        temp->Next=secondTemp;
        secondTemp->Next=NULL;
    }
}
int main()
{

    DoublyNode *head = NULL;
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
            move_head(head);
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
