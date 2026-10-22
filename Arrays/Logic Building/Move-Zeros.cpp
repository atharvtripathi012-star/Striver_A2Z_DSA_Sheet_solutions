/*Given an integer array nums, move all 0's to the end of it while 
maintaining the relative order of the non-zero elements.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(vector<int>& nums){
        int freq=0;
        if(nums.size()<2)return nums;
        for(int i =0; i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                freq++;
            }
        }
        for(int j=0;j<freq;j++){
            nums.push_back(0);
        }
        return nums;
    }
    void moveZeroes(vector<int>& nums) {
        nums=helper(nums);
        
    }