#include<bits/stdc++.h>
using namespace std;

void GCD(int m,int n){
    int gcd = 1;

    for(int i = 1; i <= min(m,n); i++){
        if(m % i == 0 && n % i == 0){
            gcd = i;
        }
    }

    cout << gcd;
}

int main(){
    GCD(9,12);
    return 0;
}