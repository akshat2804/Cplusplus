#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"What is your age"<<endl;
    cin>>age;
    //SELECTION CONTROL STRUCTURE
    //IF-ELSE STATEMENTS
    //if (age<18)
    //{
      //  cout<<"you cannot vote"<<endl;
    //}
    //else if (age==18)
    //{
      //  cout<<"you can vote if you have voting card"<<endl;
    //}
    //else{
      //  cout<<"you can vote"<<endl;
    //}
    
    //SWITCH STATEMENTS
     switch (age)
     {
     case 18:
     cout<<"You are 18"<<endl;
        break;
      case 25:
     cout<<"You are 25"<<endl;
        break;
         case 15:
     cout<<"You are 15"<<endl;
        break;
     default:
     cout<<"no special cases"<<endl;
        break;
     }
    return 0;
}