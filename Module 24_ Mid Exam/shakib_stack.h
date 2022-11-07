#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node
{
public :
    T value;
    Node<T> *Next;
    Node<T> *prev;
    Node(T val)
    {
        value=val;
        Next=NULL;
        prev=NULL;
    }
};
template<typename S>
class Stack
{
    Node<S> *head =NULL;
    Node<S> *top =NULL;
    int countt=0;
public:
    /*Stack()
    {
        head=NULL;
        top=NULL;
    }*/
    //push operation
    void push(S value)
    {
        Node <S> *newnode = new Node<S>(value);
        if(head == NULL)
        {
            head=top=newnode;
            countt++;
            return;
        }
        else
        {
            top->Next=newnode;
            newnode->prev=top;
            top=newnode; // top=top->Next
            countt++;
        }
    }

    //pop operation
    S pop()
    {
        Node <S> *delnode =top;
        S check;
        if(head==NULL) // when there is no vlaue
        {
            return check;
        }
        else if(head==top)//when there is one value
        {
            head=top=NULL;
            countt --;
        }
        else // when there is multiple values
        {
            top= delnode->prev;
           top->Next=NULL;
           countt --;
        }

        check = delnode->value;
        delete delnode;
        return check;
    }
    // empty operation
    bool emptyy()
    {
        if(head==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //top operation
    S Top()
    {
        S chk;

        if(top==NULL)
        {
            return chk;
        }
        else
        {
            return top->value;
        }
    }
    // size operation
    int sizee()
    {
       return countt;
    }
    S mid()
    {
        Node <S> *fast = head;
        Node <S> *slow = head;
        while(fast!=NULL && fast->Next!=NULL)
        {
            slow=slow->Next;
            fast=fast->Next->Next;
        }
        return slow->value;
    }
};



