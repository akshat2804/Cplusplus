#include<iostream>
using namespace std;

int main(){
    //POINTERS->> data type which holds the type of data types.
    int a=5;
    int* b=&a;
    //&-->> Address of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
       //*-->> (vaalue at)Dereference operator
    cout<<"The value at address b is "<<*b<<endl;           
     return 0;
}