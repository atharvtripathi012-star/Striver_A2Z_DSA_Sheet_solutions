/*Given an integer array of size n, find all elements that appear more than 
⌊n / 3⌋ times.*/
#include<bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int>& nums) {
    int n = nums.size() / 3;
    vector<int> solution;
    map<int, int> freq;

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    for (auto it : freq) {
        if (it.second > n) {
            solution.push_back(it.first);
        }
    }

    return solution;
}

vector<int> majorityElement(vector<int>& nums) {
    return helper(nums);
}