#include<iostream>
using namespace std;
int sum(int a, int b)
{
int c= a + b;
return c;
}
//this will not swap a and b 
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}
//CALL BY REFRENCE USING POINTERS 
void swapPointer(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
//CALL BY USING C++ REFRENCE VARIABLE 
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x=4, y=5;    
    //cout<<"The sum of 4 and 5 is "<<sum(4,5); 
    cout<<"The value of x is "<<x<<". The value of y is"<<y<<endl;
    //swap(a,b); this will not swap a and b   
    //swapPointer(&x, &y);//this will swap a and b using pointer reference  
    swapReferenceVar(x, y);//this will swap a and b using reference variable  
    cout<<"The value of x is "<<x<< ". The value of y is"<<y<<endl;   
     return 0;
}