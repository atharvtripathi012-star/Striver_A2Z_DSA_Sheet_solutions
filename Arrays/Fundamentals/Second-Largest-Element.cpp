/*Given an array of integers nums, return the second-largest element in 
the array. If the second-largest element does not exist, return -1.*/
# include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& nums) {
    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > nums[max]) {
            max = i;
        }
    }
    return max;
}

int secondLargestElement(vector<int>& nums) {
    if (nums.size() < 2) return -1;

    vector<int> arr = nums;

    int a = helper(arr);
    int ma = arr[a];

    arr.erase(remove(arr.begin(), arr.end(), ma), arr.end());

    if (arr.empty()) return -1;

    int b = helper(arr);

    return arr[b];
}