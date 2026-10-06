/*Given two strings s and goal, return true if and only if s can become goal after some number
of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

    For example, if s = "abcde", then it will be "bcdea" after one shift.
*/
#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal) {

    int n = s.length();
    char temp = 'a';
    bool result = false;
    for(int a=0; a<n ; a++){ 
          temp = s[0];
    for(int i=1;i<n;i++){
     
        s[i-1]=s[i];
       
    }
    s[n-1]=temp;
    if(s==goal){
        result = true;
        break;
    }
}
return result;
    }