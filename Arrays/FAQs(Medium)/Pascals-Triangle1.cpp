/*Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly 
above it as shown:*/
#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>> helper(int numRows) {
        vector<int>arr;
        vector<vector<int>>Master;
        arr.push_back(1);
        Master.push_back(arr);
        vector<int>temp;
        for(int i=1;i<numRows;i++){
            temp.push_back(1);
            for(int j=0;j<arr.size()-1;j++){
               temp.push_back(arr[j]+arr[j+1]);
            }
            temp.push_back(1);
            arr=temp;
            temp.clear();
            Master.push_back(arr);
        }
        return Master;
    }
    vector<vector<int>> generate(int numRows) {
        return helper(numRows);
    }