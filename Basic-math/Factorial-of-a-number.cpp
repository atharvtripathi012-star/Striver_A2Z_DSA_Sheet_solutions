/*You are given an integer n. 
Return the value of n! or n factorial.

Factorial of a number is the product of all positive integers less than
 or equal to that number.*/
 #include <bits/stdc++.h>
 using namespace std;
 int factorial(int n) {
    int i=1;
    int b=1;
    for(i=1;i<n+1;i++){
        b=b*i;
    }
return b;
    }
    int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
        return 0;
    }