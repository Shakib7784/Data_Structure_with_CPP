#include<bits/stdc++.h>
using namespace std;
template<typename N>
class Node
{
public:
    N value;
    Node<N> *Next;
    Node(N val)
    {
        value=val;
        Next=NULL;
    }
};
template<typename Q>
class Queue
{
    Node<Q> *Front;
    Node<Q> * Rear;
public:
    Queue()
    {
        Front =NULL;
        Rear=NULL;
    }

    //enqueue operation --> Push (val)
    void Push(Q val)
    {
        Node<Q> *newnode = new Node<Q>(val);
        int siz=0;
        if(Front == NULL)
        {
            Front=newnode;
            Rear = newnode;
            siz++;
            return;
        }
        Rear->Next=newnode;
        Rear=Rear->Next;
        siz++;
    }

    //dequeue operation --> Pop()
    Q Pop()
    {
        Q check;
        Node<Q> *delnode=Front;
        if(Rear==NULL)
        {
            cout<<"queue Underflow"<<endl;
            return check;
        }
        else
        {
            Front=Front->Next;
            siz--;
            if(Front==NULL)
            {
                Rear==NULL;
            }
        }
        check=delnode->value;
        delete delnode;
        return check;

    }

    //peak operation-->front(), back()

    Q FronT()
    {
        return Front->value;
    }

    Q Back()
    {
        return Rear->value;
    }

    //empty operation-> empty()

    bool emptyy()
    {
        if(Front==NULL || Rear==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int sizee()
    {
        return siz;
    }

};

