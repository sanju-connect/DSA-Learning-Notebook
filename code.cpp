#include <iostream>
#include <vector>
using namespace std;

void changeA(int &a) {
    a = 28;
}
int main() {
    int a = 10;
    changeA(a);
    return 0;
}
