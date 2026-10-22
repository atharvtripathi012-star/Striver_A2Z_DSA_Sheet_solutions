/*Given two sorted arrays, nums1 and nums2, return an array containing the 
intersection of these two arrays. Each element in the result must appear 
as many times as it appears in both arrays; that is, if an element appears 
x times in nums1 and y times in nums2, it should appear min(x, y) times in 
the result.

The intersection of two arrays is an array where all values are present 
in both arrays. Since both input arrays are sorted, the resulting 
intersection array should also be in sorted order.*/
#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(), m = nums2.size();
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m) {
        if (nums1[i] == nums2[j]) {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
   return ans;
}