#include<iostream>
using namespace std;
//*******************Function prototype
//Syntax- type function-name (arguments)
//int sum(int a, int b);//--> ACCEPTABLE
//int sum(int a, b);//--> NOT ACCEPTABLE
int sum(int, int);//--> ACCEPTABLE
//int a and int b are formal parameters. a and b will be taking values from actual parameters num1 and num2
int main()
{
int num1, num2;
cout<<"Enter 1st number "<<endl;
cin>>num1;
cout<<"Enter 2nd number "<<endl;
cin>>num2;
//num1 and num2 are actual parameters
cout<<"The sum is "<<sum(num1, num2);   
 
     return 0;
}

int sum(int a, int b)
{
    int c= a+b;
    return c;
}