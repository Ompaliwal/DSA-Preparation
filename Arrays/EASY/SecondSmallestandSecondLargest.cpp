#include <iostream>
#include <climits>  // For INT_MAX, INT_MIN
#include <utility>  // For std::pair
using namespace std;

pair<int, int> secondsmallestandlargest(int arr[], int n) {
    if (n < 2) throw invalid_argument("Array must have at least two elements");

    int largest = INT_MIN, secondlargest = INT_MIN;
    int smallest = INT_MAX, secondsmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Largest check
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }

        // Smallest check
        if (arr[i] < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondsmallest && arr[i] != smallest) {
            secondsmallest = arr[i];
        }
    }

    if (secondlargest == INT_MIN || secondsmallest == INT_MAX) {
        throw runtime_error("No second min/max found (duplicates issue)");
    }

    return {secondsmallest, secondlargest};
}

int main() {
    int arr[8] = {1, 5, 56, 34, 675, 434, 66, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    try {
        pair<int, int> result = secondsmallestandlargest(arr, n);
        cout << "Second Smallest: " << result.first << endl;
        cout << "Second Largest: " << result.second << endl;
    }
    catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
