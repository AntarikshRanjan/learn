#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int armstrong(int n){
    double sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    return sum;
};
int main(){
    int n;
    cin>>n;
    if(n==armstrong(n)){
        cout<<"armstrong";
    }
    else cout<<"not a armstrong";
    return 0;
}   