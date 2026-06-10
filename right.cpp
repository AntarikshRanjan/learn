// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n){
    int start=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start;
            start++;
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