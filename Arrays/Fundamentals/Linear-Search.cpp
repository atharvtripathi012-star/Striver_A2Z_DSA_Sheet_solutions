/*Given an array of integers nums and an integer target, find the smallest
index (0 based indexing) where the target appears in the array. If the 
target is not found in the array, return -1*/
#include<bits/stdc++.h>
using namespace std;
    int linearSearch(vector<int>& nums, int target) {
        int result =-1;
    for(int i=0; i<nums.size(); i++){

        if(nums[i]== target){
            result = i;
            break;
        }
    }
    return result;
    }