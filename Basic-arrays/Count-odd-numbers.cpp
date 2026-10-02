/*Given an array of n elements. The task is to return the count of the
 number of odd numbers in the array.*/
 #include <bits/stdc++.h>
 using namespace std;
     int countOdd(int arr[], int n){
        int count=0;
          for(int i=0;i<n;i++){
            if(arr[i]%2 != 0){
                count++;
            }
          }
          return count;
    }
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countOdd(arr, n);
    return 0;
 }