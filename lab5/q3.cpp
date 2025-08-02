#include <iostream>
using namespace std;

// Fast modular exponentiation
int powerMod(int a, int b, int mod) {
    int result = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}

bool isProbablyPrime(int p, int a = 2) {
    if (p < 2) return false;
    // Fermat's test condition
    return powerMod(a, p - 1, p) == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isProbablyPrime(num))
        cout << num << " is probably prime (by Fermat's test)." <<endl;
    else
        cout << num << " is not prime." <<endl;

    return 0;
}
