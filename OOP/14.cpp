#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;

    int count = 0;

    for (int i = 2; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    cout << "Number of primes from 0 to " << n << " is: " << count << endl;

    return 0;
}