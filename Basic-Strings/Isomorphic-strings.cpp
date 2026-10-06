/*Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order 
of characters. No two characters may map to the same character, but a character may map to itself.*/
#include <bits/stdc++.h>
using namespace std;
    bool isIsomorphic(string s, string t) {
                  int n = s.length();
        int N = t.length();
        bool result=true;
        if(n != N ){
            return  false;
        }
        else if(n==1){
            return true;
        }
        else{
            map<char,char> m1, m2;
for(int i=0; i<n; i++){
    if(m1.count(s[i]) && m1[s[i]] != t[i]) return false;
    if(m2.count(t[i]) && m2[t[i]] != s[i]) return false;
    m1[s[i]] = t[i];
    m2[t[i]] = s[i];
}
return true;
            }  
            }
