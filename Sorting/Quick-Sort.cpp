/*Given an array of integers called nums, sort the array in non-decreasing 
order using the quick sort algorithm and return the sorted array.

A sorted array in non-decreasing order is an array where each element is 
greater than or equal to all preceding elements in the array.*/
#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& nums, int low, int high) {
    int pivot = nums[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i < high && nums[i] <= pivot) {
            i++;
        }

        while (j > low && nums[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[low], nums[j]);

    return j;
}

vector<int> helper2(vector<int>& nums, int low, int high) {
    if (low < high) {
        int partition = helper(nums, low, high);

        helper2(nums, low, partition - 1);
        helper2(nums, partition + 1, high);
    }

    return nums;
}

vector<int> quickSort(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;

    return helper2(nums, low, high);
}
