// by Kadane's Algorithm

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int CurrentSum = 0, MaxSum = INT_MIN;

    for(int i = 0; i < size; i++) {
        CurrentSum += arr[i];
        MaxSum = max(CurrentSum, MaxSum);
        if(CurrentSum < 0) {
            CurrentSum = 0;
        }
    }
    cout  << MaxSum; // Output = 15
    return 0;
}