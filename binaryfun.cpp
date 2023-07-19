#include <bits/stdc++.h>
using namespace std;
int reverse(int n) {
    int ans = 0;
    while (n > 0) {
        int lastdigit = n % 10;
        ans = ans * 10 + lastdigit;
        n /= 10;
    }
    return ans;
}

int addbinary(int a, int b) {
    int ans = 0;
    int prevcarry = 0;
    while (a > 0 || b > 0) {
        int digit_a = a % 10;
        int digit_b = b % 10;
        int sum = digit_a + digit_b + prevcarry;
        ans = ans * 10 + sum % 2;
        prevcarry = sum / 2;
        a /= 10;
        b /= 10;
    }
    if (prevcarry > 0) {
        ans = ans * 10 + prevcarry;
    }
    ans = reverse(ans);
    return ans;
}

int main() {
    int a, b;
    cin >>a>>b;
    cout <<addbinary(a,b)<< endl;

    return 0;
}


/*#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 for(int i = 1; i <= n; i++)
 {
    for(int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    int space = 2*n - 2*i;
    for (int j = 1; j <= space; j++)
    {
        cout<<" ";
    }
     for(int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
 for(int  i= n; i >= 1; i--)
 {
    for(int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    int space = 2*n - 2*i;
    for (int j = 1; j <= space; j++)
    {
        cout<<" ";
    }
     for(int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
 return 0;
}*/

