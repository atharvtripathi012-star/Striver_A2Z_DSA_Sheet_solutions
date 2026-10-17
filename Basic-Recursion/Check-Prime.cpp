/*Given an integer num, return true if it is prime otherwise false.

A prime number is a number that is divisible only by 1 and itself.*/
#include <bits/stdc++.h>
using namespace std;
bool helper(int num, int divisor){
    if(divisor == 1)return true;
    if(num%divisor ==0 ) return false;
    return helper(num,divisor-1);
}
bool checkPrime(int num){
    if (num<2) return false; 
    return helper(num,num-1);
		}
