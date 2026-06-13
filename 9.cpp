// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<i+1;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<=a;i++){
        int n;
        cin>>n;
        print(n);
    }
return 0;
}