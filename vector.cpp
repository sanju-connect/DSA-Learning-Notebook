#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);


    cout << "size = " << vec.size() << endl;
    
    cout << "Elements in Vec: ";

    for(int val : vec) {
        cout << val << endl; 
    }


    return 0;
}