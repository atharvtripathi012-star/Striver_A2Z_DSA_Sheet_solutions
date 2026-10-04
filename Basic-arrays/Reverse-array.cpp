/*Given an array arr of n elements. The task is to reverse the given array.
 The reversal of array should be inplace*/
 #include <bits/stdc++.h>
 using namespace std;
   void reverse(int arr[], int n){
    int temp=0;
        for(int i=0;i<n/2;i++){
        temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
            }
    }