/*A perfect number is a positive integer that is equal to the sum of its 
positive divisors, excluding the number itself. A divisor of an integer x
 is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return
 false.*/
 #include <bits/stdc++.h>
 using namespace std;
  bool checkPerfectNumber(int num) {
        int i;
        int check=0;
        int tempcheck=0;
        for(i=1;i<num-1;i++){
            if(num%i==0){
                tempcheck=i;
                check=check+tempcheck;
            }
        }
                if(check==num){
            return true;
        }
        else{
            return false;
        }
    }
int main(){
int num;
cin>>num;
cout<<checkPerfectNumber(num);
    return 0;
}    
