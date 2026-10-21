/*Given an array of integers, nums,sort the array in non-decreasing order 
using the merge sort algorithm. Return the sorted array.

A sorted array in non-decreasing order is one in which each element is 
either greater than or equal to all the elements to its left in the array.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int start = low;
        int right = mid + 1;

        while (low <= mid && right <= high) {
            if (nums[low] <= nums[right]) {
                temp.push_back(nums[low]);
                low++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (low <= mid) {
            temp.push_back(nums[low]);
            low++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = start; i <= high; i++) {
            nums[i] = temp[i - start];
        }

        return nums;
    }

    vector<int> helper(vector<int>& nums, int low, int high) {
        if (low >= high) return nums;

        int mid = low + (high - low) / 2;

        helper(nums, low, mid);
        helper(nums, mid + 1, high);

        return merge(nums, low, mid, high);
    }

    vector<int> mergeSort(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        return helper(nums, low, high);
    }