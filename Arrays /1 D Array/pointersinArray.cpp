#include<bits/stdc++.h>
using namespace std;

int main() {
 
    
int arr[]={12,4,4,2,12,34,44};

 int *ptr=arr;
 ptr[3]=4;   // way to modify using pointer dont use * operator 

//  1 Method to print
 ptr[3]=4;


  cout<<ptr[0]<<endl;

  // 2 Method  to print

  for( int i=0;i<7;i++){
    cout<<ptr[i]<<" ";

  }

// 3 method   to print
cout<<endl<<arr[2]<<endl;

// 4 method  to print
for( int i=0;i<7;i++){
    cout<<arr[i]<<" ";

  }
cout<<endl<<"now this is the best method among all the methofd above "<<endl;

  // best method to print using pointer 

   for (int i = 0; i < 7; i++)
   {

   cout<<*ptr<<" ";
   ptr++;      // jab sabse last iteration chal rahi hogi na tab, pointer size+1 par chala jaega kyuki last iteration me bhe ptr++ hoga na islea

}
cout<<" The pointer is currently pointing to   "<<*ptr << " this  pointer can be lost ."<<endl<<", let's point it to the first element using (ptr=arr)" <<endl;

   ptr=arr;

   cout<<endl<<"Now this pointer is pointing to "<<*ptr<<endl;
    return 0;
}