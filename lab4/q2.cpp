#include <iostream>
using namespace std;

int modPower(int b, int n, int m) {
    int result = 1;
    b = b % m;
    while (n > 0) {
        if (n % 2 == 1)
            result = (result * b) % m;
        b = (b * b) % m;
        n /= 2;
    }
    return result;
}
int main() {
    int b, n, m;
    cout << "Enter base (b): ";
    cin >> b;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;
    cout << b << "^" << n << " mod " << m << " = " << modPower(b, n, m) << endl;
    return 0;
}