/*Given an integer rowIndex, return the rowIndexth (0-indexed) row of the 
Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above
it */
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(int rowIndex){
        vector<int>arr;
        vector<int>temp;
        arr.push_back(1);
        for(int i=1;i<rowIndex;i++){
            temp.push_back(1);
            for(int j=0;j<arr.size()-1;j++){
                temp.push_back(arr[j]+arr[j+1]);
            }
            temp.push_back(1);
            arr=temp;
            temp.clear();
        }
        return arr;
    }
    vector<int> getRow(int rowIndex) {
        return helper(rowIndex+1);
    }