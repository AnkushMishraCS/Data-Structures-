//  Good MEthod

#include<bits/stdc++.h>
using namespace std;

int main() {
 int arr[7]={12,544,13,456,77,34,55};
 
 int key;
  cout<<"Enter the element you want to search ? "<<endl;
  cin>>key;
bool flag = false;

  for (int i = 0; i <7; i++)
  {
    if(arr[i]==key) flag=true;
         

     
  }
  

  if(flag){
    cout<<"Element is Present ";
  }
  else 
  cout<<"Element is Absent ";
  

    return 0;
}
 
// Basic Method
#include<bits/stdc++.h>
using namespace std;

int main() {
 int arr[7]={12,544,13,456,77,34,55};
 
 int key;
  cout<<"Enter the element you want to search ? "<<endl;
  cin>>key;

  for (int i = 0; i <7; i++)
  {
    if(arr[i]==key){
        cout<<"Element Found at  : "<<i<<" Index";

    }
  }
  
    return 0;
}