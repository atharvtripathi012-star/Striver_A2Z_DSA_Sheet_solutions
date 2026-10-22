/*Given a binary array nums, return the maximum number of consecutive 1's 
in the array.*/
#include<bits/stdc++.h>
using namespace std;
    int helper(vector<int>& nums){
        int Streak =0;
        int MaxCount =0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            Streak++;
        }
        else{
            if(Streak>MaxCount){
                MaxCount=Streak;
               
                }
             Streak=0;

        }
        
        }
        if(Streak>MaxCount){
            MaxCount=Streak;
        }
        return MaxCount;
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        return helper(nums);
        
    }