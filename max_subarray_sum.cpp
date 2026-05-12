// Using Brute Force Approach
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int MaxSum = INT_MIN;

    for(int start = 0; start < size; start++) {
        int CurrentSum = 0;
        for(int end = start; end < size; end++) {
            CurrentSum += arr[end];
            MaxSum = max(CurrentSum, MaxSum);
        }
    }

    cout << "Maximum Subarray Sum of the Array [";
    for(int i = 0; i < size; i++) {
        cout << arr[i];

        if(i != size - 1) {
            cout << ", ";
        }
    }
    cout << "] is: " << MaxSum << endl;
    return 0;
}