/*Given an array of n integers, find the second most frequent element in it
.
If there are multiple elements that appear second most frequent times, 
find the smallest of them.
If second most frequent element does not exist return -1.*/
#include <bits/stdc++.h>
using namespace std;
int secondMostFrequentElement(vector<int>& nums) {
    map<int,int>freq;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int key = nums[i];
        freq[key]++;
    }
     map<int,int>copy = freq;
     int MaxValue=0;
     int Delete =0;
     for(auto x : copy ){
        if(x.second > MaxValue){
            MaxValue=x.second;
            Delete = x.first;
        }
    }
        copy.erase(Delete);
        int SecondMax=0;
        int Result=0;
     for(auto a : copy ){
        if(a.second <MaxValue && a.second> ){
            MaxValue=a.second;
            Result = a.first;
        }
    }
    if(Result==0){
        return -1;

    }
    else{
        return Result;    
    }

    }