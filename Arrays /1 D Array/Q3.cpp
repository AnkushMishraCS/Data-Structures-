//  find the max and Secondmax element in the array 

#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[7]={12,44,233,12,4,34,234};
    int max=INT_MIN;
    int second_max=INT_MIN;
     for( int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];

        }
     }
 
     for( int i=0;i<7;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];

        }}

        cout<<"MAx element is : "<<max<<" and Second MAx is : "<< second_max;
        
    return 0;
}
