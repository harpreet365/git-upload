/*Binary Search in a Sorted Array*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter the element to search: ";
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1) cout << "Element found at index: " << result << endl;
    else cout << "Element not found" << endl;
    return 0;
}
