/*Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.
*/
#include <bits/stdc++.h>
using namespace std;
int NnumbersSum(int N){
    if(N==0){
		return 0;
	}
	else{
		return N+NnumbersSum(N-1);
	}
		}
		int main(){
			int N;
			cin>> N;
			int result = NnumbersSum(N);
			cout<< result;
			return 0;
		}