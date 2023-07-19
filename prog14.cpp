#include<iostream>
using namespace std;
inline int product(int a, int b){
     //not recomended to use below lines with inline function 
//     static int c;
//   c=c+1;
return a*b;
}
float MoneyRecived(int CurrentMoney, float  factor=1.04){
     return CurrentMoney * factor;
}
int main()
{
      int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
     int money = 100000;        
     /*cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;
     cout<<"The product of a and b is "<<product(a, b)<<endl;*/
     cout<<"If you have "<<money<<" RS in your bank account, you will recive "<<MoneyRecived(money)<<" RS after one year";

    
     return 0;
}