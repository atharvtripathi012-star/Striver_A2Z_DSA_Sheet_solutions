/*Given an array of integers nums, return the value of the largest element 
in the array*/
#include<bits/stdc++.h>
using namespace std;
   int largestElement(vector<int>& nums) {
    int max=0;
    for(int i =0; i<nums.size(); i++){
        if(nums[i]>nums[max]){
         max=i;
        }
    }
    return nums[max];

    }