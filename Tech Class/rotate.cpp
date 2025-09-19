#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int temp = n;   // Preserve original n
    int digits = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Handle cases where k >= digits
    k = k % digits;
    if (k < 0) {
        k += digits;  // convert negative rotation to positive equivalent
    }

    int div = 1;
    for (int i = 0; i < k; i++) {
        div *= 10;
    }

    int front = n / div;        // The left part
    int endDigits = n % div;    // The right part

    int result = endDigits * (int)pow(10, digits - k) + front;

    cout << result;

    return 0;
}
