#include<bits/stdc++.h>
using namespace std;

void divisors(int N)
{
    int n = 1;

    while(n <= N)
    {
        if(N % n == 0)
            cout << n << " ";

        n++;
    }
}

int main()
{
    divisors(36);
}