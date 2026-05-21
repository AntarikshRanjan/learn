// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
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