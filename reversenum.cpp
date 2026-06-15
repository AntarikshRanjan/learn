#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int rev(int n){
    int reversenum=0;
    while(n>0){
    int lastdigit=n%10;
    n=n/10;
    reversenum=(reversenum*10)+lastdigit;
    }
    return reversenum;
};
int main() {
    cout<<rev(4000);
    return 0;
}