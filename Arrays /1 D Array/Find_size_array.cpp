#include<bits/stdc++.h>
using namespace std;

int main() {
 int arr[]={23,44,2,345,22,44,2,34,4,6,5,4,56,7,44,4,3};
     //  now how can we find the size  of this array ?
    //  using the sizeof operator 

     int size=sizeof(arr)/sizeof(arr[0]);

     cout<<" Size of the array is : "<<size;

    return 0;
}