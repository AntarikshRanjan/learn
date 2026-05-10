#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age >= 18) {

        if(age > 55 && age <= 57) {
            cout << "retirement soon";
        }
        else if(age > 57) { 
            cout << "retirement";
        }
        else {
            cout << "eligible for the role";
        }

    }
    else {
        cout << "not eligible for the role";
    }

    return 0;
}