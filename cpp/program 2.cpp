/*Maximum Subarray Sum (Kadane's Algorithm)*/

#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0], currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Maximum subarray sum: " << maxSubArraySum(arr, n) << endl;
    return 0;
}
