/*You are given an integer n. You need to return the number of digits 
in the number.
The number will have no leading zeroes, except when the number is 0 
itself.*/
#include <iostream>
using namespace std;
int main(){
int n;
int Digit=0;
cout<<"Enter n : ";
cin>>n;
if(n<0){
n=-n;
}
int i;
if(n==0){
cout<<"The number of digits in the integer n is : "<<1;

}
else{
for(i=0;i<5;i++){
if(n>0){
Digit++;
n=n/10;
}
}
cout<<"The number of digits in the integer n is : "<< Digit;
}
return 0;
}