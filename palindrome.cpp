#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int palindrome(int n){
    int reversenum=0;
    while(n>0){
    int lastdigit=n%10;
    n=n/10;
    reversenum=(reversenum*10)+lastdigit;
    }
    return reversenum;
};
int main() {
    int n;
    cin>>n;
    if(palindrome(n)==n){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}