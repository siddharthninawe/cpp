#include <iostream>
using namespace std;

int main() {
    int i;
    long num;
    

    cout << "Enter a positive integer: ";
    cin >> num;

    // 0 and 1 are not prime numbers
    for (long n = 0; n <= num; n++) {
        bool isPrime = true;

        if (n == 0 || n == 1) {
            isPrime = false;
        } else {
            for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            cout << n << ", ";
    }  
    
    return 0;
}