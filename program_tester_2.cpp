#include<bits/stdc++.h>

using namespace std;

int main() {
    // long long int value = 52504222585724001;
    // cout << value % 10000000007;
    long long int value0 = 5351871996120528;
    // __int128_t value1 = 10000000007;
    // cout << std::numeric_limits<__int128_t>::max();
    cout << ((value0 % 1000000007) * (value0 % 1000000007)) % 1000000007;
    return 0;
} 