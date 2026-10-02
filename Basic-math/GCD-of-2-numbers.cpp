/*You are given two integers n1 and n2. You need find the Greatest Common 
Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive 
integer that divides both of the integers.*/
#include <bits/stdc++.h>
using namespace std;
int GCD(int n1,int n2) {
    int a=0;
    int temp=0;

    if (n1>n2){
     for(int i=1;i<=n2;i++){
     if(n1%i==0 && n2%i==0){
    temp=i;
     }
     }
    }
    else{
             for(int i=1;i<=n1;i++){
     if(n1%i==0 && n2%i==0){
    temp=i;
     }
     }
    }
return temp;
    }
int main(){
    int n1, n2;
    cin>>n1;
    cin>>n2;
    cout<<GCD(n1,n2) ;
    return 0;
} 