// Memory allocation in Array 

//  its a continuous memory allocation in the array 

#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[5]={1,6,3,54,6};

//  Very Important to NOTE 

cout<<&arr[0]<<endl;  // this will print the address of the  0 index
cout<<&arr<<endl;     // this will print the address of the  0 index
 cout<<arr<<endl ;    // this will print the address of the  0 index

cout<<&arr[1]<<endl; //  this will print the address of the  1 index
cout<<&arr[2]<<endl; //  this will print the address of the  2 index
cout<<&arr[3]<<endl; //  this will print the address of the  3 index
cout<<&arr[4]<<endl; //  this will print the address of the  4 index

    return 0;
}