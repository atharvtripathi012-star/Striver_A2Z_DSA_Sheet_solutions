/*You are given an integer n. You need to find out the number of
 prime numbers in the range [1, n] (inclusive). Return the number 
 of prime numbers in the range.
 Using Sieve Of Eratosthenes*/
 #include <bits/stdc++.h>
 using namespace std;
 int primeUptoN(int n) {
     bool arr[n+1];
    for(int i=2;i<=n;i++){
        arr[i]=true; 
    }
for(int b=2;b*b<=n;b++){
    if (arr[b]==true){
    for(int j=b*b;j<=n;j+=b){
        arr[j]=false;
    }
}
}
int count =0;
for(int c=2;c<=n;c++){
    if (arr[c]==true){
    count++;
    }
}
return count;
 }

int main(){
    int n;
    cin>> n;
    cout<<primeUptoN(n); 
}