#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
    //CONSTENTS IN  C++
    //const int a = 35;
    //cout<<"The value of a was: "<<a<<endl;
    //a=23;
    //cout<<"The value of a is "<<a<<endl;
    //This will show an error because a is a constent

    //MANIPULATORS INC++
   // int x=4, y=54, z=4355;
    //cout<<"The value of x without setw is "<<x<<endl;
    //cout<<"The value of y without setw is "<<y<<endl;
    //cout<<"The value of z without setw is "<<z<<endl;

    //cout<<"The value of x with setw is "<<setw(4)<<x<<endl;
    //cout<<"The value of y with setw is "<<setw(4)<<y<<endl;
    //cout<<"The value of z with setw is "<<setw(4)<<z<<endl;
    //OPERATOR PRECEDENCE
    int a=6, b=9; 
    int c= (a*5)+b-57+62;
    cout<<c;
    return 0;
}