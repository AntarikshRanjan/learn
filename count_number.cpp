#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int count(int n){
    int ct=0;
    while(n>0){
    ct=ct+1;
    n=n/10;
    }
    return ct;
};
int main() {
    cout<<count(109689047);
    return 0;
}