#include <iostream>
 
 using namespace std;
// int c=47;
 int main(){
//******BUILT IN DATA TYPES    
// int a, b, c;
// cout<<"Enter the value of a:"<<endl;
 //   cin>>a;
  //  cout<<"Enter the value of b:"<<endl;
  //  cin>>b;
  //  c=a+b;
  //  cout<<"The sum is "<<c<<endl;
  //  cout<<"The global c is "<<::c;
  //******BUILT IN DATA TYPES(FLOAT, DOUBLE, LONG DOUBLE)   
  //  float x=25.8f;
    //long double y=25.8l;
    //cout<<"The size of 25.8 is "<<sizeof(25.8)<<endl;
   // cout<<"The size of 25.8f is "<<sizeof(25.8f)<<endl;
    //cout<<"The size of 25.8F is "<<sizeof(25.8F)<<endl;
   // cout<<"The size of 25.l is "<<sizeof(25.8l)<<endl;
   // cout<<"The size of 25.8L is "<<sizeof(25.8L)<<endl;
   // cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y;
   //******REFERENCE VARIABLES
  // float p=555;
   //float & q=p;;
   //cout<<p<<endl;
   //cout<<q<<endl;
   //*****TYPECASTING
   int d=28;
   float g=38.65;
   cout<<"The value of d is "<<(float)d<<endl;
   cout<<"The value of d is "<<float(d)<<endl;

   cout<<"The value of g is "<<(int)g<<endl;
   cout<<"The value of g is "<<int(g)<<endl;
   int c=int(g);

   cout<<"The expression is "<<d + g<<endl;
   cout<<"The expression is "<<d + int(g)<<endl;
   cout<<"The expression is "<<d + (int)g<<endl;
    return 0;
 }