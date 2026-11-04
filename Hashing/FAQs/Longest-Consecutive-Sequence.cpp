/*Given an unsorted array of integers nums, return the length of the longest 
consecutive elements sequence.

You must write an algorithm that runs in O(n) time.*/
#include<bits/stdc++.h>
using namespace std;
    int helper(vector<int>& nums) {
      int cnt=1;
        int min = INT_MAX;
      unordered_set <int> duprem;
      for(int i=0; i<nums.size();i++){
        duprem.insert(nums[i]);
      }
  int longest = 0;

for(auto x : duprem){

    if(duprem.find(x - 1) == duprem.end()) {

        int cnt = 1;
        int current = x;

        while(duprem.find(current + 1) != duprem.end()){
            current++;
            cnt++;
        }

        longest = max(longest, cnt);
    }
}
return longest;
    }
    int longestConsecutive(vector<int>& nums) {
        return helper(nums);
    }