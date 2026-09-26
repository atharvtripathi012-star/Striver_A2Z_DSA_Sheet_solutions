/*You are given an integer n. You need to check if the number is prime
 or not. Return true if it is a prime number, otherwise return false.

A prime number is a number which has no divisors except 1 and itself.*/
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    int i;
    int tempcheck=0;
    int check=0;
    int original=n;
    for(i=1;i<=n;i++){
      
        if(original%i==0){
        tempcheck=i;
        check=check+tempcheck;
        }
    }
if(check==n+1){
    return true;
}
        else{
            return false;
        }
    }
    int main(){
    int n;
    cin>> n;
    cout<<isPrime(n);
    }