#include <iostream>
#include <vector>
using namespace std;

int Binary_Search_Requisive(vector<int> arr, int target, int st, int end) {
    if(st <= end) {
        int mid = ((st) + ((end - st) / 2));
        if(target > arr[mid]) {
            return Binary_Search_Requisive(arr, target, mid + 1, end);
        }
        else if(target < arr[mid]) {
            return Binary_Search_Requisive(arr, target, st, mid - 1);
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
    int st = 0;
    int end = arr1.size() - 1;

    int ans = Binary_Search_Requisive(arr1, tar1, st, end);
    cout << "The " << tar1 << " Belongs in Index[" << ans << "]" << endl;


    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even array
    int tar2 = 0;
    st = 0;
    end = arr2.size() - 1;

    ans = Binary_Search_Requisive(arr2, tar2, st, end);
    cout << "The " << tar2 << " Belongs in Index[" << ans << "]" << endl;

    return 0;
}
