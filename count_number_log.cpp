#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int count(int n){
    int ct=log10(n)+1;
    return ct;
};
int main() {
    cout<<count(109689047);
    return 0;
}