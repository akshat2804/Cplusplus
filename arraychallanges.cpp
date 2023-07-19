//given an array of size n from every i from 0 to n-1 output max(a[0],a[1]...a[i])?
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int mx = -1999999;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        mx = max(mx,a[i]);
        cout<<mx<<endl; 
    }
return 0;
}*/
//**************************************************
//given an array a[] of size n. Output sum of each subarrray in the given array:-   
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int curr=0;
          for(int j=i; j<n; j++)
          {
             curr += a[j];
             cout<<curr<<endl;       
          }
    }
    return 0;
}*/
//******************************************************
/*Golu has ana array of N non-neagative integers. 
The i-th integer of the array is A. 
He watns to choose a contigous arithmetic subarray from the array that has the maximum length. 
Please help him to dertermine the length of the longest arthimetic subarray?*/
 /*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
       cin>>a[i];
    }
    int ans = 2;
    int pd = a[1]- a[0];
    int j = 2;
    int curr  = 2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
           curr ++;
        }
        else
        {
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max (ans, curr);
       j++;
    }
    cout<<ans<<endl;
    return 0;
}*/
