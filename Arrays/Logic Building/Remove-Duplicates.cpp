/*Given an integer array nums sorted in non-decreasing order, remove the 
duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing 
duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted 
order. The remaining elements beyond index k - 1 can be ignored.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(vector<int>& nums){
        if(nums.size()<2)return nums;
        int freq=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
                freq++;
            }
        }
        return nums;
    }
    int removeDuplicates(vector<int>& nums) {
        nums = helper(nums);
        return nums.size();
        
    }