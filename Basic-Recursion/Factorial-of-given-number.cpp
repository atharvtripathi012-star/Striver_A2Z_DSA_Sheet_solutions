/*Given an integer n, return the factorial of n.

Factorial of a non-negative integer, is the multiplication of all integers smaller than or equal 
to n (use 64-bits to return answer).*/
#include <bits/stdc++.h>
using namespace std;
long long int factorial(int n){
		if(n==0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
        }
        int main(){
            int n;
            cin>> n;
            long long result = factorial(n);
            cout<<result;
            return 0;
        }