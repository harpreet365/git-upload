//Find the second largest element in an array.

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = -1, secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Second largest element: " << secondLargest(arr, n) << endl;
    return 0;
}
