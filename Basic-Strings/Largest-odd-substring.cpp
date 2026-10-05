/*Given a string s, representing a large integer, the task is to return the largest-valued odd 
integer (as a string) that is a substring of the given string s.

The number returned should not have leading zero's. But the given input string may have leading 
zero. (If no odd number is found, then return empty string.)*/
#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
     int n=num.length();
     string s = num;
    for(int i =0; i<n;i++){
        if((s[n-i-1]-0)%2==0){
            s.erase(n-i-1);
        }
        else{
            break;
        }
    }
    return s;

    }