#include<bits/stdc++.h>

using namespace std;

int main() {
    double value = 4.14215;
    cout << value << endl;
    for(int i = 0; i <= 6; i++)
        cout << "Setprecision(" << i << ") : " << setprecision(i) << value << endl;
    return 0;
} 