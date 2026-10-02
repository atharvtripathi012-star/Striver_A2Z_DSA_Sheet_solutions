/*You are given two integers n1 and n2. You need find the Lowest Common 
Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.

The Lowest Common Multiple (LCM) of two integers is the lowest positive
integer that is divisible by both the integers.*/
#include <bits/stdc++.h>
using namespace std;
 int LCM(int n1,int n2) {
    int temp=0;
    int i=1;
    while(temp==0){
        if(i%n1==0 && i%n2==0){
            temp=i;
        }
        else{
            temp=0; 
        }
        i++;
    }
    return temp;
    }
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<LCM(n1,n2);
}