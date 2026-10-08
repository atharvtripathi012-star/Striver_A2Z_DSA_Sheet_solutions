/*Given an array nums, find the sum of elements of array using recursion.*/
#include <bits/stdc++.h>
using namespace std;
int arraySum(vector<int>& nums){
    int n = nums.size()-1;
    if(n==0){
        return nums[0];
    }
    else{
        int a = nums[n];
        nums.pop_back();
        return a + arraySum(nums);
    }
	    
		}
    