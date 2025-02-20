// CAlculate the sum of Array 

#include<bits/stdc++.h>
using namespace std;

int main() {
 int arr[]={1,35,44,223,6,4,44,3};
  int size= sizeof( arr)/sizeof(arr[0]);
  int sum=0;
  for (int i = 0; i <size; i++)
  {
    sum+=arr[i];

  }
  cout<<"The sum of the Elements of the  Array is : "<<sum ;

    return 0;
}