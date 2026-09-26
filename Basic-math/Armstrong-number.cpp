/*You are given an integer n. 
You need to check whether it is an armstrong number or not. 
Return true if it is an armstrong number, otherwise return false.

An armstrong number is a number which is equal to the sum of the digits
 of the number, raised to the power of the number of digits.*/
#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n) {
    int i;
    int b=0;
    int result=0;
    int original = n;
    int temp=n;
    int a=0;
    while(n>0){
        n=n/10;
       a++;
    }
    while(temp>0){
       b=temp%10;
       temp=temp/10;
           int power=1;
       
       for(i=0;i<a;i++){
        power=power*b;
       }
        result=result+power;
       
    }
    if(result==original){
      return true;
    }
    else{
      return false;
    }
    }
    int main(){
      int n;
      cin>>n;
      cout<<isArmstrong(n);
      return 0;   
    }