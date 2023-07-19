//Print all prime numbers between two given numbers
/*#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(i%num==0)
        {
            return false;
        }
        return true; 
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        if(isPrime(i)==true)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}*/
//------------------------Fibonacci series----------------------------
/*#include<iostream>
using namespace std;
void fib(int n){
    int a=0; 
    int b=1;
    int nextterm;
    for(int i=a; i<=n; i++){
    cout<<a<<endl;
    nextterm=a+b;
    a=b;
    b=nextterm;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}*/
//---------------------Factorial-----------------------
/*#include<iostream>
using namespace std;
void fact(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        cout<<factorial<<endl;
        factorial*=i;
    }
}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}*/
//---------------------nCr----------------------
/*#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++)
     {
        factorial*=i;
     }
     return factorial;
}
int main(){
    int n, r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}*/
//----------------------------------------
/*#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/