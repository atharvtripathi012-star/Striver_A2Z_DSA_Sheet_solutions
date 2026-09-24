/*You are given an integer n. You need to return the number of odd digits
 present in the number.

The number will have no leading zeroes, except when the number is 0 itself.
*/

#include <iostream>
using namespace std;
int countOddDigit(int n){
    int count=0;
    int a;
while(n>0){
a=n%10;
if(a%2==1){
count++;
}
n=n/10;
}
return count;
    }
int main(){
int n;
cin>> n;
cout<<countOddDigit(n);

    return 0;
}