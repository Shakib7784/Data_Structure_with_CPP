#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int siz, int current)
{
    int largest = current;
    int leftindex = (2*current)+1;
    int rightindex = (2*current)+2;

    if(leftindex<siz && arr[largest]>arr[leftindex])
    {
        largest=leftindex;
    }
    if(rightindex<siz && arr[largest]>arr[rightindex])
    {
        largest=rightindex;
    }
    if(largest!=current)
    {
        swap(arr[largest], arr[current]);
        heapify(arr,siz,largest);
    }
}
void heapsort(int arr[], int siz)
{
   /* for(int i=siz-1;i>=0;i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }*/
    // decending order sorting

    for(int i=0;i<siz;i++)
    {
        swap(arr[siz], arr[i]);
        heapify(arr, i, siz-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int non_leaf_node = (n/2)-1;
    cout<<"before hepify "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=non_leaf_node;i>=0;i--)
    {
        heapify(arr,n,i);
    }

    cout<<endl<<"after hepify"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"after heapsort"<<endl;

    heapsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}


/*
9
2 10 1 5 4 8 3 8 7

*/

