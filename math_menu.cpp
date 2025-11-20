#include <iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

bool isArmstrong(int n){
    int temp=n, sum=0;
    while(temp){
        int d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }
    return sum==n;
}

bool isPalindrome(int n){
    int t=n, r=0;
    while(t){
        r=r*10 + t%10;
        t/=10;
    }
    return r==n;
}

int main(){
    int ch,n;
    cin >> ch >> n;

    switch(ch){
        case 1: cout << factorial(n); break;
        case 2: cout << (isPrime(n) ? "Prime" : "Not Prime"); break;
        case 3: cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong"); break;
        case 4: cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome"); break;
        case 5: break;
        default: cout << "Invalid";
    }
}
