/*Given two sorted arrays nums1 and nums2, return an array that contains 
the union of these two arrays. The elements in the union must be in 
ascending order.

The union of two arrays is an array where all values are distinct and are 
present in either the first array, the second array, or both.*/
#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(), m = nums2.size();
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        int element;

        if (nums1[i] < nums2[j]) {
            element = nums1[i++];
        }
        else if (nums2[j] < nums1[i]) {
            element = nums2[j++];
        }
        else {
            element = nums1[i];
            i++;
            j++;
        }

        if (ans.empty() || ans.back() != element) {
            ans.push_back(element);
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != nums1[i]) {
            ans.push_back(nums1[i]);
        }
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != nums2[j]) {
            ans.push_back(nums2[j]);
        }
        j++;
    }

    return ans;
}