/*Given an m x n matrix, return all elements of the matrix in spiral order.*/
#include<bits/stdc++.h>
using namespace std;
    vector<int> helper(vector<vector<int>>& matrix , vector<int>& order) {
      if(matrix.empty() || matrix[0].empty()) {
      return order;
      }
       int m=matrix.size();
       int n=matrix[0].size();
       for(int i =0; i<n; i++){
         order.push_back(matrix[0][i]);
       }
       for(int j=1; j<m-1; j++){
         order.push_back(matrix[j][n-1]);
       }
       if(m>1){
       for(int k=n-1;k>=0;k--){
        if(m == 1) break;
         order.push_back(matrix[m-1][k]);
       }
      }
      if(n>1){
        for(int l=m-2; l>0; l--){
         order.push_back(matrix[l][0]);
       }      
      }
       matrix.erase(matrix.begin());
       if(!matrix.empty()) {
       matrix.pop_back();
       }
       for(int h=0; h<matrix.size();h++){
            if(!matrix[h].empty()) {
                matrix[h].erase(matrix[h].begin());
            }

            if(!matrix[h].empty()) {
                matrix[h].pop_back();
            }
            }
    return helper(matrix, order);
    }
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
          vector<int>order;
          return helper(matrix,order);
        }