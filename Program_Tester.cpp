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

int primeCount(long t) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i;
    unsigned long long int n;
    
    while(t>0) {
        cin>>n;
        if(n<2)
            cout<<0<<endl;
        else {
            unsigned long long int s=a[0];
            for(i=1;i<25;i++) { 
                s=s*a[i];
                if(n<s)
                    break; 
            }
            cout<<i<<endl;
        }
        t--;
    }
    return i;
}

int main() {
    long a;
    cin >> a;
    cout << primeCount(a);
    return 0;
}