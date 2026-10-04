/*Given an array nums of n integers, find the most frequent element in it 
i.e., the element that occurs the maximum number of times. If there are 
multiple elements that appear a maximum number of times, find the 
smallest of them.
 */
#include <bits/stdc++.h>
using namespace std;
int mostFrequentElement(vector<int>& nums) {
map<int,int>freq;
int n = nums.size();
for(int i=0;i<n;i++){
    int key = nums[i];
    freq[key]++;
}
int MaxValue=0;
int result=0;
for(auto x:freq){
if(x.second>MaxValue){
    MaxValue=x.second;
    result=x.first;
}

}
return result;
    }