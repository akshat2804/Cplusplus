
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

/*---------------------Prime number---------------------
int main()
{
    int n;
    int i;
    cin>>n;
    bool flag=0;
    for(i=2; i<=sqrt(n); i++) 
    {
    if(n%i==0)
     {
     cout<<"non prime"<<endl;
      flag=1;
      break;
     }   
    }
    if(flag==0){
        cout<<"prime"<<endl;
    } 
    return 0;
}*/
/*--------------------------reverse of a number---------------------------
int main(){
    int n; 
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
       n=n/10; 
    }
    cout<<reverse<<endl;
    return 0;
}*/
/*-------------------Amstrong number--------------------
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;

    while (n > 0) {
        int lastdigit = n % 10;
        sum += lastdigit*lastdigit * lastdigit;
        n = n / 10;
    }

    if (sum == originaln) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}*/



