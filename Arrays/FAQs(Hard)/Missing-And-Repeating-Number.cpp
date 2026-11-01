/*Given an integer array nums of size n containing values from [1, n] and each
value appears exactly once in the array, except for A, which appears twice and 
B which is missing.

Return the values A and B, as an array of size 2, where A appears in the 0-th 
index and B in the 1st index.

Note: You are not allowed to modify the original array*/
#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> nums) {
    int n = nums.size();
    vector<int> original = nums;
    vector<int> toerase;
    vector<int> solution;

    sort(original.begin(), original.end());

    for(int j = 1; j <= n; j++) {
        solution.push_back(j);
    }

    for(int i = 0; i < n-1; i++) {
        if(original[i] == original[i+1]) {
            toerase.push_back(original[i]);
        }
    }

    for(int k = 0; k < toerase.size(); k++) {
        auto it = find(solution.begin(), solution.end(), toerase[k]);
        if(it != solution.end()) {
            solution.erase(it);
        }
    }
    int repeating = toerase[0];
    int missing = -1;

    for(int i = 1; i <= n; i++) {
        auto it = find(original.begin(), original.end(), i);
        if(it == original.end()) {
            missing = i;
            break;
        }
    }

    return {repeating, missing};
}