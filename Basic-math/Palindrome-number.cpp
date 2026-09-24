/*Given an integer x, return true if x is a palindrome,
 and false otherwise.*/
 #include <iostream>
 using namespace std;
     bool isPalindrome(int x) {
        long long b;
        long long reversed=0;
        int original= x;
        bool result;
        if(x < 0) return false;
        while(x>0){

            b=x%10;
            reversed=reversed*10 + b;
            x=x/10;

        }
        if(reversed == original){
        result = true;
        }
        else{
            result = false;
        }
        return result;
    }
    int main(){
    int x;
    cin>>x;
    if(isPalindrome(x)==true){
        cout<< "True";
    }
    else{
        cout<<"False";
    }
        return 0;
    }