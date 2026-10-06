/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        else{
            map < char,int > freqs;
            map < char,int > freqt;
            for(int i=0 ; i<s.length(); i++){
                char key = s[i];
                freqs[key]++;
            }
             for(int a=0 ; a<t.length(); a++){
                char keys = t[a];
                freqt[keys]++;
            }
            if(freqs == freqt)return true;
        }
        return false;
    }