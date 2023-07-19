# include <iostream>

using namespace std;
int glo=8;
//we can make local and global vae=riable by same name but precedence will be more of local variable over global variable. 
void sum(){
    int a;
}
int main(){
    int glo=9;
   /* int a=4;
    int b=5;*/
    float pi=3.14;
    char c='k';
    bool x= false;
    sum();
    cout<< x;
   /* cout<< "This is 2nd program. \nHere the value of a is "<< a <<". The value of b  is "<< b ;
    cout<<"\nThe value of pi is "<<pi;     
    cout<<"\nThe value of c is "<<c; */
    cout<<glo;    

    return 0;
}