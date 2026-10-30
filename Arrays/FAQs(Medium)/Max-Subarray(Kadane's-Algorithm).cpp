/*Given an integer array nums, find the subarray with the largest sum, and 
return its sum.*/
#include<bits/stdc++.h>
using namespace std;
    int helper(vector<int>& nums) {
    int max= INT_MIN;
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        sum = sum + nums[i];
        if(sum>max)max=sum;
        if(sum<0)sum=0;
    }
    return max;
    }
    int maxSubArray(vector<int>& nums) {
        return helper(nums);
    }