//1->SELECTION SORT--------------
/*#include<iostream>
using namespace std;
int main(){
    int arr[n];
    for(int i = 0; i < n; i++)
    {
          cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j < i-1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = trmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}*/
//------------------BUBBLE SORT 
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}*/
//----------------INSERTION SORT
//we will shift elements in inserstion sort and will not swap the elements 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr [n];
  int j;
  for(int i=1;  i<n; i++){
    int current = arr[i];
    for(int j = i-1; j <=0; j--){
        if(arr[j]>current){
            //shift
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1] = current;
  }  
}
