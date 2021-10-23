#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'primeCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */
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
    long prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};
    long product = 1;
    int ans=0;
    for(int i=0; i<15; i++) {
        product = product*prime[i];
        if(product <= n)
            ans++;
    }
    return ans;
}

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        long n = stol(ltrim(rtrim(n_temp)));

        int result = primeCount(n);

        cout << result << "\n";
    }


    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
