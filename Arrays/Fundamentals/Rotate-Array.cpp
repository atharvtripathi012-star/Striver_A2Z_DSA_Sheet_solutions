/*Given an integer array nums, rotate the array to the right by k steps, 
where k is non-negative.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(vector<int>& nums, int k){
        if(nums.size()<2)return nums;
        vector<int> rotatednums;
        for(int i =k-1 ; i>=0 ;i--){
            rotatednums.push_back(nums[nums.size()-1-i]);
        }
        for(int j=0; j<nums.size()-k;j++){
            rotatednums.push_back(nums[j]);
        }
        return rotatednums;

    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        nums = helper(nums,k);
    }