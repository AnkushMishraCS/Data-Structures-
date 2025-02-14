#include<bits/stdc++.h>
using namespace std;
int factorial( int n){
    int fact=1;
    for (int i = 2; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int permutation( int n, int r){

int p=factorial(n)/factorial(n-r);
return p;


}

int combination( int n, int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
     return comb;

}
int main() {
 
    int n,r;

    cout<<"enter the value of N : ";
    cin>>n;

    cout<<"enter the value of R : ";
    cin>>r;

    cout<<"Permutation is : " <<permutation(n,r) <<endl;

    cout<<"Combination is : " <<combination(n,r) ;







    return 0;
}
