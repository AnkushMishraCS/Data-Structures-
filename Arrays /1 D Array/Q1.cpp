//  given the array of marks of student , if the marks of any student is less than 35 print the
//  roll no , here roll number is the index number 

#include<bits/stdc++.h>
using namespace std;

int main() {
 
    
 cout<<"Enter the number of students in the class ";
  int students;
  cin>>students;

  int arr[students ];
  cout<<"Enter marks : "<< endl;
  for( int i=0;i<students;i++){
    cin>>arr[i];

  }
cout<<"Enter the cutoff : "<<endl;
int cutoff;
cin>>cutoff;

  for( int i=0;i<students;i++){
    if(arr[i]>cutoff) cout<<i<<" ";
  }
    return 0;
}
