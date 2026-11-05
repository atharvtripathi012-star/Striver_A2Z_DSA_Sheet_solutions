/*Given an array of integers nums which is sorted in ascending order, and an 
integer target, write a function to search target in nums. If target exists, 
then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.*/
#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& nums, int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (target > nums[mid]) {
        return helper(nums, mid + 1, high, target);
    }
    else if (target < nums[mid]) {
        return helper(nums, low, mid - 1, target);
    }
    else {
        return mid;
    }
}
int search(vector<int>& nums, int target) {
    return helper(nums, 0, nums.size() - 1, target);
}