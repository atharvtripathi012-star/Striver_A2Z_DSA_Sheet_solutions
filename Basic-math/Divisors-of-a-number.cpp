/*You are given an integer n. You need to find all the divisors of n. 
Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.*/
#include <bits/stdc++.h>
using namespace std;
 vector<int> divisors(int n) {
vector<int>divisors;
for(int i=1;i<=n;i++){
    if(n%i==0){
        divisors.push_back(i);
    }

}
return divisors;
    }
int main(){
int n;
cin>>n;
vector<int> result = divisors(n);
for(auto it : result){
    cout<< it;
}
}