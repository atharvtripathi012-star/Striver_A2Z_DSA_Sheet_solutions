/*Given a string s, return true if the string is palindrome, otherwise 
false.

A string is called palindrome if it reads the same forward and backward.*/
#include <bits/stdc++.h>
using namespace std;
void helper(string& s, int left, int right){
    if(left >= right) return; 
    swap(s[left], s[right]);
    helper(s, left+1, right-1);
}
bool palindromeCheck(string& s){
		string original = s;
        helper(s , 0 , s.length()-1);
        if(original == s)return true;
        else return false;
		}