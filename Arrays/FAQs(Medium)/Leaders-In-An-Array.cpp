/*Given an integer array nums, return a list of all the leaders in the array.

A leader in an array is an element whose value is strictly greater than all 
elements to its right in the given array. The rightmost element is always a 
leader. The elements in the leader array must appear in the order they appear 
in the nums array.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> leaders(vector<int>& nums) {
        vector<int>arr;
        bool check = true;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<=nums[j]){
                    check =false;
                    break;
                }

            }
                if(check == true){
                    arr.push_back(nums[i]);
                }
        }
        
        return arr;
    }