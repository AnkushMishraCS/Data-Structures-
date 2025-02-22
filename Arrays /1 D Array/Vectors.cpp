#include<bits/stdc++.h>
 

using namespace std;

int main() {
 
 vector<int>v;  // no need to mention size 

 v.push_back(6);     //  push_back method vector me jab space nahi hota to double space create jar deta hai .
 v.push_back(16);
 v.push_back(61);
 v.push_back(66);
 v.push_back(46);

cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
cout<<v[4]<<" ";

cout<<v[8];   // As 8 element  is not present in the memory , it will point to  any  garbage value. 

// Neeche wale  method se hamesha value ko access and modify kare, value insert karne ke liye ise use na kare 
v[80]=101;  // kyuki jab vector me jagah nahi hogi to ham aese value insert nahi kar paeyege. 



    return 0;
}