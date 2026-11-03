/*Given two integer arrays nums1 and nums2. Both arrays are sorted in 
non-decreasing order.
Merge both the arrays into a single array sorted in non-decreasing order.
 The final sorted array should be stored inside the array nums1 and it should 
 be done in-place.
nums1 has a length of m + n, where the first m elements denote the elements of
 nums1 and rest are 0s.
 nums2 has a length of n.*/
 #include<bits/stdc++.h>
 using namespace std;
    vector<int> helper(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m-1 , nums1.end());
        for(int i=0; i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin() , nums1.end());
        return nums1;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1 = helper(nums1 , m, nums2, n);
    }