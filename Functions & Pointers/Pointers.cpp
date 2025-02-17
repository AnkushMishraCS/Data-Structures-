// update value using Pointers

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=10;
 
     int x,y;
     int*q,w;    //   this is wrong, here Q is a pointer variable but w is not.
    //  w=&a;           This line is error because its not possible to   declare two pointers like 2 integers above 
     q=&a;
    
    int *p=&a;
    cout<<*p<<endl;
    *p=122;
    cout<<a;

    return 0;
}