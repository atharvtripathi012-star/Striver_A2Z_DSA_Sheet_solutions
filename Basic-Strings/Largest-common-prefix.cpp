/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    int n = strs.size();
    
    for(int i = 1; i < n; i++){
        while(strs[i].find(prefix) != 0){
            prefix = prefix.substr(0, prefix.length()-1);
            if(prefix.empty()) return "";
        }
    }
    return prefix;
}
