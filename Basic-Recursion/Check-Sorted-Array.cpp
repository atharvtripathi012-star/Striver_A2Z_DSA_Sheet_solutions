/*Given an array nums of n integers, return true if the array nums is 
sorted in non-decreasing order or else false.*/
#include<bits/stdc++.h>
using namespace std;
bool helper(vector<int>& nums , int l, bool result){
	if(l==0){
		return result;
	} 
    if(nums[l-1]>nums[l]){
		result= false;
		
	}
	return helper(nums,l-1,result);
}
bool isSorted(vector<int>& nums){
	int l = nums.size()-1;
	bool result = true;
	return helper(nums, l , result);

		}