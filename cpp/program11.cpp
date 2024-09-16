/*Star Pyramid*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // Print leading spaces
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }

    return 0;
}
