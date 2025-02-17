// WAP to find the sum of two numbers usign  pointers 

#include<bits/stdc++.h>
using namespace std;

int main() {
 
int x,y;

int *a=&x;
int*b=&y;

cout<<"Enter the value of A : "<<endl;
cin>>*a;     // taking user input as a pointer 

cout<<"Enter the value of B : "<<endl;
cin>>*b;

cout<<"The sum is : "<<*a + *b;
    return 0;
}