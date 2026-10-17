/*Given an array nums of n integers, return reverse of the array.*/
#include <bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int>& nums, int left, int right){
    if(left >= right) return nums;
    swap(nums[left], nums[right]);
    return helper(nums, left+1, right-1);
}

vector<int> reverseArray(vector<int>& nums){			
   int right = nums.size()-1;
   int left= 0;  
   return helper(nums, left, right); 
		}