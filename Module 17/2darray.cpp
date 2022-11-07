#include<iostream>
using namespace std;

void processArr(int *a) {
   cout << "element at index 1,1 is " << a[1];
}
int main() {
   int arr[2];
   arr[0] = 0;
   arr[0] = 1;
   arr[1] = 2;
   arr[1] = 3;

   processArr(arr);
   return 0;
}
