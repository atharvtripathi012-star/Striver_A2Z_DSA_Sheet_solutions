/*Given an array of n integers, find the sum of the frequencies of the 
highest occurring number and lowest occurring number.*/
#include <bits/stdc++.h>
using namespace std;
int sumHighestAndLowestFrequency(vector<int>& nums) {
    map<int,int>freq;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int key = nums[i];
        freq[key]++;
    }
    int MaxValue=0, r1=0 , r2 =0, result =0;
    int MinValue = INT_MAX;
    for(auto x : freq){
        if(x.second>MaxValue){
        MaxValue=x.second;
        r1=x.second;
        }
        if(x.second<MinValue){
            MinValue=x.second;
            r2=x.second;
        }
    }
    result = r1+r2;
    return result;
}