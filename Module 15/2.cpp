#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node *Next;

};
void Display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value<<endl;
        n=n->Next;
    }
}
int main()
{
    Node *Head = new Node();
     Node *Second = new Node();
     Node *Third = new Node();
     Node *Fourth= new Node();

     Head->value=1;
     Second->value=2;
     Third->value=5;
     Fourth->value=7;

     Head->Next= Second;
    Second->Next=Third;
    Third->Next=Fourth;
    Fourth->Next=NULL;

    Display(Head);



    return 0;
}
