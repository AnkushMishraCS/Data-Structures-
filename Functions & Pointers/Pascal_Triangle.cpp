//  this one is without spacing
/*  1
    11
    121
    1331
    14641  */



// BASIC METHOD


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
 

int combination( int n, int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
     return comb;

}
int main() {
 
    int n;

    cout<<"How many lines you want to Print ? ";
    cin>>n;

    for (int i = 0; i <=n; i++)
    {
        for(int j=0;j<=i;j++ ){
            cout<<combination(i,j);
        }
    cout<<endl;
}
    
 
    return 0;
}


// METHOD 2

// GOOD method as comapred to above

#include<bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;

for (int i = 0; i <=n; i++)
    {int current =1;
        for(int j=0;j<=i;j++ ){
            cout<<current;
             current=current*(i-j)/(j+1);
        }
    cout<<endl;
}
    
    return 0;
}
