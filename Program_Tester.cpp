#include <bits/stdc++.h>

using namespace std;

int isPrime(int number) {
    // negative numbers, 0 and 1 are 
    // not a prime number
    if( number <= 1 ) return 0;

    // 2 and 3 are prime numbers
    if( number <= 3 ) return 1;

    // numbers divisible by 2 and 3
    // are not prime number
    if(number%2==0 || number%3==0)
    return 0;

    // logic for remaining numbers
    for(int i=5; i <= sqrt(number); i=i+6) {
        // 6k+1 => number%i
        // 6k-1 => number % (i+2)
        if(number%i == 0 || number%(i+2) == 0) 
        return 0;
    }

    // if all above conditions are not satisfied
    return 1;
}

int primeCount(long n) {
    int j = 0;
    long prime_multiple = 1;
    
    if (n == 1) {
        return 0;
    } else if (n == 2 || n == 3) {
        return 1;
    } else {
        for (long i = 0; prime_multiple <= n; i++) {
            if (isPrime(i)) {
                if (prime_multiple * i > n) {
                    break;
                } else {
                    prime_multiple = prime_multiple * i;
                    j = j + 1;
                }
            }
        }
        return j;
    }
}

int main() {
    long a;
    cin >> a;
    cout << primeCount(a);
    return 0;
}