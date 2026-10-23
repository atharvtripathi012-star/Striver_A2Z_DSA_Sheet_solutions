/*You are given an n x n 2D matrix representing an image, rotate the image by 
90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the 
input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation
*/
#include<bits/stdc++.h>
using namespace std;
    vector<int>revarr(vector<int>& arr){
        int n=arr.size();
        for(int i=0; i<n/2;i++){
            swap(arr[i],arr[n-i-1]);
        }
        return arr;
    }
    vector<vector<int>> helper(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int k=0; k<n; k++){
            revarr(matrix[k]);
        }
        return matrix;
    }
    void rotate(vector<vector<int>>& matrix) {
        matrix= helper(matrix);
    }