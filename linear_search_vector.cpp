#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    int target = 30;

    int result = linearSearch(arr, target);

    if(result != -1) {
        cout << "Element Found at Index: " << result;
    }
    else {
        cout << "Element not found";
    }
    return 0;
}