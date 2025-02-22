//  Passing the array in the function 


#include<bits/stdc++.h>
using namespace std;
void display( int arr[], int size){

//  void display( int *arr,int size) {     // this is also a good method 
 
 for(  int i=0;i<=size;i++){
 cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 void change( int arr[],int size){

// (NOTE)  int size=sizeof(arr)/sizeof(int);   yha function ke andar size ki value nahi nikalni because "arr " ek pointer hai , iski help se size nikalna error dega.

    arr[0]=121;
    cout<<endl;
    
 }
int main() {
    int arr[]={3,4,5,6,2,4,5,7456,7,54,36,56,67}    ;
    
    int size=sizeof(arr)/sizeof(int);       // size ko hamesha main function ke andar nikale, 



    // NOTE :  NEECHE BAHUT IMPORTANT HAI DEKH KAR CHALNE KA  
     cout<<&arr;            // syntax dekho
     cout<<endl<<arr<<endl;    // syntax dekho 
     cout<<&arr[0];             // syntax  dekho



     cout<<endl;
 display(&arr[0],size);
//  change(&arr,size);    this line will be error (&arr) is pointing to array of 5 intergers  ans the finction is expecting the pointer of 1 array.
 change(arr,size);
 display(arr,size);
  return 0;
}
