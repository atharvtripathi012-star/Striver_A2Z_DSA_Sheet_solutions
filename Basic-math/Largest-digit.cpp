/*You are given an integer n. 
Return the largest digit present in the number.*/
#include <bits/stdc++.h>
using namespace std;
int largestDigit(int n) {
    int a=0;
    int temp=0;
    while(n>0){
        a=n%10;

        if(a>=temp){
            temp=a;
        }
        n=n/10;
    }
return temp;
    }
    int main(){
        int n;
        cin>> n;
        cout<<largestDigit (n);
        return 0;
    }