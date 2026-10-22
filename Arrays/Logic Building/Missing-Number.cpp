/*Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(vector<int>& nums , int n){
        for(int i =0 ; i<n ; i++){
            int j=i;
            while(j>0 && nums[j-1]>nums[j]){
                swap(nums[j-1],nums[j]);
                j--;
            }
        }
        return nums;

    }
    int helper2(vector<int>& nums){
       int n = nums.size();
       nums = helper(nums,n);
       if(nums[0]!=0)return 0;
       if(n<2)return n; 
       int result =0;
       for(int i=0;i<n-1;i++){
        if(nums[i+1] != nums[i]+1){
            result = nums[i]+1;
            break;
        }
        else{
             result = n;
        }
       }
       return result;
    }
    int missingNumber(vector<int>& nums) {
        return helper2(nums);
    }
