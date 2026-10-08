/*Given an input string as an array of characters, write a function that 
reverses the string.*/
#include <bits/stdc++.h>
using namespace std;
void helper(vector<char>& s, int left, int right){
    if(left >= right) return;
    swap(s[left], s[right]);
    helper(s, left+1, right-1);
}

vector<char> reverseString(vector<char>& s){
    helper(s, 0, s.size()-1);
    return s;
}