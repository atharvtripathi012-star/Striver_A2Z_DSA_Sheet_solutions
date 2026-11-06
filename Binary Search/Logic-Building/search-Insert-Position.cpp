/**/
#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& nums, int low, int high, int target) {

    if(low > high){
        return low;
    }

    int mid = (low + high) / 2;

    if(target > nums[mid]){
        return helper(nums, mid + 1, high, target);
    }

    if(target < nums[mid]){
        return helper(nums, low, mid - 1, target);
    }

    if(target == nums[mid]){
        return mid;
    }

    return mid + 1;
}

int searchInsert(vector<int>& nums, int target) {
    return helper(nums, 0, nums.size() - 1, target);
}