#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    int value;
    Node *Next;
    //constructor creation
    Node(int val)
    {
        value=val;
        Next=NULL;
    }
};
void display(Node *h)
{
    while(h!=NULL)
    {
        cout<<h->value<<endl;
        h=h->Next;

    }
}
void insertAtTail(Node* &head, int v )
{
        Node *NewNode = new Node(v);
        if(head==NULL)
        {
            head=NewNode; // holding the address of new node
        }
        else
        {
            Node *temp = head;
            while(temp->Next!=NULL)
            {
                temp=temp->Next;
            }
            temp->Next=NewNode; // holding the address of new node
        }
}
insertAtHead(Node* &head, int v)
{
    Node * newnode = new Node(v);
    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        Node * temp = head;
        head=newnode;
        head->Next=temp;
      /*
        // or we can do
        // s1: new node creation
       Node * newnode = new Node(v);
        // update of new node => to head
        newnode->Next = head;
        // update of head
        head=newnode; */
    }
}
int length(Node *&head)
{
    int c=0;
    Node * newnode = head;
    while(newnode!= NULL)
    {
        c++;
        newnode=newnode->Next;
    }
    return c;
}

void insertAtSpecificPosition(Node *&head, int pos, int val)
{
    Node *newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Node *temp=head;
       for(int i=1;i<pos-1;i++) // if i==0, then i<pos-2;i++
       {
           temp=temp->Next;
       }
        Node * NextNode = temp->Next; // we have to set temp->next  to our new node. that is why we are keeping temp-next value in nextnode. other wise the current value of temp->next will be lost.
        temp->Next=newnode; // we are keeping newnode to temp->next . temp is indicating the pos-1.
       newnode->Next=NextNode; // now we are connecting newnode next to the nextnode . nextnode was the
       /*
       newnode->Next = temp->Next;
       temp->Next= newNode;
       */
    }
}

int searchUnique(Node *&head,int sv)
{
        if(head==NULL)
        {
            return -1;
        }
    else
    {
        int c=1;
        Node *temp = head;
        while(temp->value!=sv)
        {
            if(temp->Next==NULL)
            {
                return -1;
            }
            c++;
            temp=temp->Next;
        }
        return c;
    }
}
void searchDuplicate(Node*head, int sv)
{

        Node *temp=head;
        int siz = length(head);// we are calling length function which we have created previously. Here, I have measuring the size of linked list.
        int position[siz+1],k=1;
        int c=1;
        int f=0;
        while(temp!=NULL)
        {
            if(temp->value==sv)
            {
                position[k]=c;
                k++;
                f++;
            }
            c++;
            temp=temp->Next;
        }

        if(f==0)
        {
            cout<<"Searched value is not found"<<endl;
        }
        else
        {
            position[0]=k;
            cout<<"The value is found at position: "<<endl;
            for(int i=1;i<position[0];i++)
            {
                cout<<position[i];
                if(i<position[0]-1) cout<<",";
            }
            cout<<endl;
        }


}
int main()
{
    Node *head=NULL;
    int len;
    int choice;
    cout<<"give your choice:  "<<endl<<"1 is for insert at head  "<<endl;
    cout<<"2 is for insert at tail  "<<endl<<"3 is for insert at specific position "<<endl;
    cout<<"4 is for searching value from unique valued linked list"<<endl<<"any value for exist "<<endl;
    cout<<"5 is for searching value from duplicate valued linked list"<<endl;
    cin>>choice;
    while(choice!=0)
    {
        int value, position;

        if(choice==1)
        {
            cout<<"enterValue: ";
            cin>>value;
            insertAtHead(head,value);
        }
        else if(choice ==2)
        {
            cout<<"enterValue: ";
            cin>>value;
            insertAtTail(head,value);
        }
        else if( choice==3)
        {
            cout<<"enter position: ";
            cin>>position;
            cout<<"enterValue: ";
            cin>>value;
            insertAtSpecificPosition(head,position,value);
        }
        else if(choice ==4)
        {
            cout<<"enterValue to search: ";
            cin>>value;
            int position= searchUnique(head,value);
            if(position==-1)
            {
                cout<<"This value is not exist"<<endl;
            }
            else
                cout<<"Position of searched value is: "<<position<<endl;
        }
        else if(choice==5)
        {

             cout<<"enterValue to search duplicate position: ";
            cin>>value;
            searchDuplicate(head,value);

        }
        else
        {
            break;
        }
        cout<<"Next Choice: ";
        cin>>choice;
    }
    cout<<endl;
    cout<<"Linked List: "<<endl;
    display(head);/// we are not passing here address of head because linked list work like an array. array does not need address when we pass array.
    cout<<endl<<"Length of Linked List:"<<endl;
    len= length(head);
   cout<<len;




}



