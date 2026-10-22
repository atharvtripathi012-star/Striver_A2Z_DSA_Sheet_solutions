/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/
#include<bits/stdc++.h>
using namespace std;
    int majorityElement(vector<int>& nums){
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            int key = nums[i];
            freq[key]++;
        }
        int MaxValue=0;
int result=0;
for(auto x:freq){
if(x.second>MaxValue){
    MaxValue=x.second;
    result=x.first;
}
}
return result;
    }
