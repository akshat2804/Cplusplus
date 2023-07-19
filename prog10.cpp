#include<iostream>
using namespace std;

int main(){
 int marks[]={24, 44, 45, 63};
 int sstmarks[4];
 sstmarks[0]=56;
 sstmarks[1]=47;
 sstmarks[2]=57;
 sstmarks[3]=66;
cout<<"These are sstmarks"<<endl;
cout<<sstmarks[0]<<endl;
cout<<sstmarks[1]<<endl;
cout<<sstmarks[2]<<endl;
cout<<sstmarks[3]<<endl;
cout<<"These are marks "<<endl;
  //cout<<marks[0]<<endl;
  //you can change the value of an array
  //marks[1] = 67;
  //cout<<marks[1]<<endl;
  //cout<<marks[2]<<endl;
  //cout<<marks[3]<<endl;
  int i=0;
  while (i<4)
  {
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
  }
  //POINTERS IN ARRAYS
  int* p = marks;
  cout<<"The value of *p is "<<*p<<endl;
  cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
  cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
  cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
     return 0;
}