/*You are given an array nums with n objects colored red, white, or blue, sort 
them in-place so that objects of the same color are adjacent, with the colors 
in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and 
blue, respectively.
You must solve this problem without using the library's sort function*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(vector<int>& nums) {
        int n = nums.size();
        int zer=0;
        int one=0;
        int two=0;
        for(int i=0; i<n ; i++){
            if(nums[i]==0){
                zer++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        for(int j=0; j<zer; j++){
            nums[j]=0;
        }
        for(int k=zer; k<zer+one; k++){
            nums[k]=1;
        }
        for(int l=zer+one; l<n; l++){
            nums[l]=2;
        }
        return nums;
    }
    void sortColors(vector<int>& nums) {
        nums = helper(nums);
    }