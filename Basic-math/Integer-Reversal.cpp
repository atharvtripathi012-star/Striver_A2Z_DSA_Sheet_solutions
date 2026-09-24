#include <bits/stdc++.h>
using namespace std;
    int reverse(int x) {
            int i=0;
        long long a;
        int digit;
        long long result=0;
        if(x<0){
        a=-(long long)x;
        }
        else{
            a=x;
        }
        while(a>0){
        digit=a%10;
        result=result*10 + digit;
        a=a/10;
        }
        if(x<0){
        result=-result;
        }
        if(result > INT_MAX || result < INT_MIN) return 0;
        return (int)result;
    }
    int main(){
    int x;
    cin>>x;
    cout << reverse(x);

        return 0;
    }