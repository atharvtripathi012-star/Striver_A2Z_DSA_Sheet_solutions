/*Given an integer num, repeatedly add all its digits until the result has 
only one digit, and return it*/
#include <bits/stdc++.h>
using namespace std;
int helper(int num){
    int result =0;
    if (num==0){
        return 0;
    }                                 
     return num%10+helper(num/10);

}
int addDigits(int num){
	if(num < 10)return num;
    return addDigits(helper(num));
	}