// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n){
    char start='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start;
        }
            cout<<endl;
            start++;
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