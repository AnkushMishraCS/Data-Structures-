//  count the number of elements greater than a number

#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[7]={12,343,5,3,234,5,23} ;
int num,count=0;
cout<<"Enter the number ";
cin>>num;
 for (int i = 0; i < 7; i++)
 {
    if(arr[i]>num){
        count++;
    }
 }
 cout<<"The number of elements greater than "<<num<<" are "<<count;
    return 0;
}
