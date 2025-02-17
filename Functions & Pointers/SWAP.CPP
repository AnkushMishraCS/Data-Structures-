//    WAp to swap two numbers using POinters .
   
   #include<bits/stdc++.h>
    using namespace std;
    void swap(int*a,int *b){

int temp= *a;        
 
  *a=*b;
 *b= temp;

 
}
int main() {
    
    int a,b;
    int*x=&a;
    int*y=&b;
    
    cout<<"Enter the value of A: "<<endl;
    cin>>*x;
    cout<<"ENter the value of B: "<<endl;
    cin>>*y;
    
    swap(x,y);
    
    cout<<"The swap values are : "<<"value of X : "<< a<<" value of Y: "<<b;


        return 0;
    }


    //  CHEAP pass by reference 

    #include<bits/stdc++.h>
    using namespace std;
    void swap(int &a,int &b){       // notice here we have used & operator 

int temp= a;        
 
 a=b;
 b= temp;

  
    }
    int main() {
     
        int a,b;
        

   cout<<"Enter the value of A: "<<endl;
   cin>>a;
   cout<<"ENter the value of B: "<<endl;
   cin>>b;

   swap(a,b);      // here we are not passing the address , then also it will workfine

   cout<<"The swap values are : "<<"value of X : "<< a<<" value of Y: "<<b;


        return 0;
    }