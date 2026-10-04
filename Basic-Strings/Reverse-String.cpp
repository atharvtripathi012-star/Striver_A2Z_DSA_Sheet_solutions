/*Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.*/
#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
        int n = s.size();
        char a = 'd';
        for(int i=0;i<n/2;i++){
            a=s[n-i-1];
            s[n-i-1]=s[i];
            s[i]=a;        
        }
        
    }