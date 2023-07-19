#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eid;
    float salary;
    char favchar;
}ep;
union money
{
    /* data */
    int rice;
    float pounds;
    char car;
};

int main(){
     enum meal{breakfast, lunch, dinner};
     meal m1 = breakfast;
     cout<<m1;
     //cout<<breakfast;
     //cout<<lunch;
     //cout<<dinner;
     /*ep daksh;
     union money m1;
     m1.rice = 25;
     cout<<m1.rice;*/
 
 /* ep daksh;
    daksh.eid = 1;
    daksh.salary = 350000;
    daksh.favchar =  'C';
    cout<<"The value is "<<daksh.salary<<endl;
    cout<<"The value is "<<daksh.eid<<endl;
    cout<<"The value is "<<daksh.favchar<<endl;*/
     return 0;
}