#include <iostream>
#include <vector>
using namespace std;

int Binary_Search(vector<int> arr, int target) {
    int st = 0;
    int end = (arr.size() - 1);
    int ans = 0;

    while(st <= end) {
        int mid = ((st) + (end - st) / 2)

        if(target > arr[mid]) {
            st = mid + 1;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd array
    int tar1 = 12;

    int ans = Binary_Search(arr1, tar1);
    cout << "The " << tar1 << " Belongs in Index[" << ans << "]" << endl;


    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even array
    int tar2 = 0;

    ans = Binary_Search(arr2, tar2);
    cout << "The " << tar2 << " Belongs in Index[" << ans << "]" << endl;

    return 0;
}
