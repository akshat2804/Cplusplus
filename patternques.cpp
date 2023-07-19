//RECTANGULAR STAR PATTERN
/*#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row>>col;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/

 //******************Holllow rwctangle pattern
 /*#include<iostream>
 using namespace std;
 int main(){
    int a;
    int b;
    cin>>a>>b;
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            if(a == i || b == j || i==1 || j == 1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
 }*/
//*******************************Half piramid

/*#include<iostream>
using namespace std;

int main(){
    int a;
cin>>a;
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}*/
//*********************************Half piramid upside down

/*#include<iostream>
using namespace std;
int main(){
    int a; 
    int b;
    cin>>a>>b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(j<=i){
                cout<<"";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/
//-------------Half primqaid using numbers--------------- 
/*
#include<iostream>
using namespace std;
int main(){
    int a; 
    int b;
    cin>>a>>b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
           if(j <= i){
            cout<<i;
           }
           else{
            cout<<"";
           }
        }
        cout<<endl;
    }
    return 0;
}*/
//-----------Flyod's triangle------------
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++){
            cout<<count<<"";
            count++;
        }
      cout<<endl;
    }
    return 0;
}*/
//----------------Butterfly pattern---------
#include<bits/stdc++.h>
using namespace std;
int maon(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++);
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n -2*i;
        for(int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
          cout<<endl;  
    }
}