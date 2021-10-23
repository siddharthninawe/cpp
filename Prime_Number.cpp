#include <iostream>
using namespace std;

int getPrime(int num) {
    int lastPrime;
    // 0 and 1 are not prime numbers
    for (long n = 0; n <= num; n++) {
        bool isPrime = true;

        if (n == 0 || n == 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            lastPrime = n;
    }

    return lastPrime;
}

int main() {
    int i;
    long num;
    int lastprime;

    cout << "Enter a positive integer: ";
    cin >> num;

    lastprime = getPrime(num);

    for (long n = 0; n <= num; n++) {
        bool isPrime = true;

        if (n == 0 || n == 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            // if (lastprime % n == 0) {
            cout << n << ", ";
            // }
            
    }
    
    return 0;
}