/*Given an array arr of size n, the task is to find the sum of all the 
elements in the array.*/
#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n) {
    int result=0;
	  for(int i=0;i<n;i++){
        result=result + arr[i];
      }
      return result;
	}
int main(){
    int n;
cin>> n;
    int arr[n];

for(int i =0; i<n;i++){
    cin>>arr[i];
}
cout<<sum(arr, n) ;
}