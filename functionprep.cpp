//------------------------------------------
/*#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int ans=0;
    for(int i=1; i<=n; i++)
        ans+=i;
        return ans;
    }
int main(){
    int n;
     cin>>n;
     cout<<sum(n)<<endl;
}*/
//-------------------Pythagorian triplet------------------------
/*#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c){
  int x=max(a, max(b, c));
  
  int y, z;
  if(x==a)
  {
    y=b;
    z=c;
  }
  else if(x==b)
  {
    y=a;
    z=c;
  }
  else
  {
    y=a;
    z=b;
  }
  if(x*x == y*y + z*z)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(check(a, b, c))
{
    cout<<"pythagorean triplet"<<endl;
}
else{
    cout<<"not pytagorean triplet"<<endl;
}
}*/
//---------------------bianry ro decimal-----------------------------
/*#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0)
{
        int y = n%10;
        ans += x*y;
        x*=2;
        n /= 10;
}
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;

}*/
//--------------------Octal to binary-------------------------
/*#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n){
    int x=1;
    int ans=0;
while(n>0){
    int y = n%10;
    ans += x*y;
    x *= 8;
    n /= 10;  
} 
return ans;
}
int main(){
    int n;
    cin>>n;
   cout<<octalToDecimal(n)<<endl;
}*/

//-----------------------Hexa decimal to decimal-------------------------
/*#include<bits/stdc++.h>
using namespace std;
int hexaDecimalToDecimal(string n){
        int x = 1; 
        int ans = 0;    
        int s = n.size();
        for(int i = s-1; i >= 0; i--)
            {
                if(n[i] > '0' && n[i] <= '9')
                {
                    ans += x*(n[i] - '0');
                }
                else if(n[i] >= 'A' && n[i] <= 'F')
                {
                    ans += x*(n[i] -'A' + 10);
                }
                x *= 16;
            }
            return ans;
       }
int main(){
    string n;
    cin>>n;
    cout<<hexaDecimalToDecimal(n)<<endl;
}*/
//------------------------decimalToBinary-------------------------
/*#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x<=n)
        x *= 2;
        x /= 2;
    while(x>0)
    {
    int lastdigit = n/x;
    n -= lastdigit*x;
    x /= 2;
    ans = ans*10 + lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToBinary(n)<<endl;
}*/
//--------------------decimal to octal----------------------------
/*#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){
    int x=1;
    int ans=0;
    while(x<=n)
    x *= 8;
    x /= 8;
    while(x>0)
    {
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=8;
        ans = ans*10 + lastdigit;

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToOctal(n)<<endl;
}*/
//-------------------decimaltoHexadecimal-------------------------
/*#include<bits/stdc++.h>
using namespace std;
string decimaltoHexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x<=n)
    x*=16;
     x/=16;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
       
        if(lastdigit <= 9)
        ans = ans + to_string(lastdigit);
        else{
            char c='A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
      return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimaltoHexadecimal(n)<<endl;
}*/
//------------------Adding two binary numbers-----------------------
#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int ans = 0;
    while(n>0){
        int lastdigit = n%10;
        ans = ans*10 + lastdigit;
         n/=10;
    }
    return ans;
}
int addbinary(int a, int b)
{
    int ans = 0;
    int prevcarry = 0;
    while((a>0) && (b>0))
    {
        if((a%2==0) && (b%2==0))
        {
            ans = ans*10 + prevcarry;
            prevcarry = 0;
        }
        else if(a%2==0 && b%2==1 || a%2==1 && b%2==0)
        {
            if(prevcarry=1)
            {
                ans = ans*10+0;
                prevcarry=1; 
            }
            else 
            {
                ans = ans*10+1;
                prevcarry = 0;
            }
        }
        else 
        {
            ans=ans*10+prevcarry;
            prevcarry=1;
        }
        a/=10;
        b/=10;
    }
    while (a>0)
    {
        if(prevcarry==1)
        {
            ans=ans*10+0;
            prevcarry=1;
        }
        else{
            ans=ans*10+1;
            prevcarry=0;
        }
    }
       while(a>0)
       {
         if(prevcarry==1)
         {
            if(a%2==1)
            {
                ans=ans*10+0;
                prevcarry=1;
            }
            else 
            ans=ans*10+1;
            prevcarry=0;
         }
       else
        {
        ans=ans*10+(a%2);
        }
            a/=10;
        }
        while(b>0)
       {
         if(prevcarry==1)
         {
            if(b%2==1)
            {
                ans=ans*10+0;
                prevcarry=1;
            }
            else 
            ans=ans*10+1;
            prevcarry=0;
         }
       
       else
        {
        ans=ans*10+(b%2);
        }
            b/=10;
       }
       if(prevcarry==1)
       {
        ans=ans*10+1;
       }
       ans = reverse(ans);
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<addbinary(a,b)<<endl;
}