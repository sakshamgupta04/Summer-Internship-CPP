#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertion_sort(vector<int>& arr) {
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        // Find the position where *it should be inserted
        auto const insertion_point = upper_bound(arr.begin(), it, *it); 

        // Rotate the elements to make space for *it
        rotate(insertion_point, it, it + 1); 
    }
}

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};

    insertion_sort(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}