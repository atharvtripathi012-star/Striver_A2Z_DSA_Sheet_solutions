/*You are given a 0-indexed integer array nums of even length consisting of an 
equal number of positive and negative integers.

You should return the array of nums such that the array follows the given 
conditions:

    1. Every consecutive pair of integers have opposite signs.
    2. For all integers with the same sign, the order in which they were present in nums is preserved.
    3. The rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy the 
aforementioned conditions.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> rearrangeArray(vector<int>& nums){
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int j=0; j< nums.size()/2 ; j++){
            ans.push_back(pos[j]);
            ans.push_back(neg[j]);
        }
        return ans;
    }