//---------ARRAYS---------- 
/*#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0; i<n; i++){
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
    return 0;
}*/
//------------LINEAR SEARCH
#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i = 1; i < n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}   

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
     cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
}