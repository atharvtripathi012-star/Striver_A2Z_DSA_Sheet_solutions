/*Given an m x n integer matrix matrix, if an element is 0, 
set its entire row and column to 0's.
You must do it in place.*/
#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>> helper(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> zeroesi;
        vector<int> zeroesj;
        for(int i=0; i<n ;i++){
            for(int j=0; j<m ; j++){
                if(matrix[i][j]==0){
                    zeroesi.push_back(i);
                    zeroesj.push_back(j);
                }
            }
        }
        for(int k=0; k<zeroesi.size(); k++){
            fill(matrix[zeroesi[k]].begin(), matrix[zeroesi[k]].end(), 0);
        }

        for(int v=0;v<zeroesj.size();v++){
            for(int l=0 ; l<n; l++){
                matrix[l][zeroesj[v]] =0;
            }
        }
        return matrix;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        matrix=helper(matrix);
    }