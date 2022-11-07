#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node
{
    public:
    T value;
    Node<T> *Next;
    Node<T> *prev;
    Node (T val)
    {
        value = val;
        Next = NULL;
        prev=NULL;
    }
};
template<typename S>
class Stack
{
    Node<S> *head = NULL;
    Node<S> *top = NULL;
    int countt =0;
public:
    //push operation
    void Push(S val)
    {
        Node<S> * newnode = new Node<S> (val);
        if(head==NULL)
        {
            head=top=newnode;
            countt++;
            return;
        }
        else
        {
            top->Next=newnode;
            newnode->prev=top;
            top=top->Next;
            countt++;
        }
    }

    // pop operation
    S Pop()
    {
        Node<S> *delnode=top;
        S check;
        if(head ==NULL)
        {
            return check;
        }
        else if(head==top)
        {
            head=top=NULL;
            countt--;
        }
        else
        {
            top=delnode->prev;
            top->Next=NULL;
            countt--;

        }
         check=delnode->value;
        delete(delnode);
        return check;
    }
    //empty operation
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
    // finding top
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
    // finding size
    int Size()
    {
        return countt;
    }
};

