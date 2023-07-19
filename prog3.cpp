//thewr arw two types of header files 
//1.system header files: it comes with the complier
#include <iostream>//this is a system header file
//2.user defined header files: it is written by the programmer
//eg- #include "this.h" now this will produce error if this.h id not present in the current directory

using namespace std;

int main(){
int a=8, b=2;
cout<<"operators in c++:"<<endl;
cout<<"following are the operators in c++:"<<endl;
//arithmetic operators
cout<<"The value of a+b is "<<a+b<<endl;
cout<<"The value of a-b is "<<a-b<<endl;
cout<<"The value of a*b is "<<a*b<<endl;
cout<<"The value of a/b is "<<a/b<<endl;
cout<<"The value of a%b is "<<a%b<<endl;
cout<<"The value of a++ is "<<a++<<endl;
cout<<"The value of a-- is "<<a--<<endl;
cout<<"The value of ++a is "<<++a<<endl;
cout<<"The value of --a is "<<--a<<endl;
cout<<endl;
//assingment operators- used to assign values to variables
//int a=4, b=6;
//char c='d';
//comparision operators
cout<<"Following are the comparision operators in c++:"<<endl; 
cout<<"The value of a==b is "<<(a==b)<<endl; 
cout<<"The value of a<b is "<<(a<b)<<endl; 
cout<<"The value of a>b is "<<(a>b)<<endl; 
cout<<"The value of a<=b is "<<(a<=b)<<endl; 
cout<<"The value of a>=b is "<<(a>=b)<<endl; 
cout<<"The value of a!=b is "<<(a!=b)<<endl; 
cout<<endl;
//Logical operators
cout<<"Following are the logical operators in c++:"<<endl; 
cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; 
cout<<"The value of this logical or operator ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl; 
cout<<"The value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl; 
 
return 0;

}
