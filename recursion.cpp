#include<bits/stdc++.h>
using namespace std;

int factorial(int n);

int main() {
    int n = 3;
    cout << factorial(n);
    return 0;
}

int factorial(int n) {
    if(n==0) {
        return 1;
    }
    return n * factorial(n-1);
}