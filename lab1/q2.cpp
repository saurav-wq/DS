
/*2. Write a program that takes two or more sets as input and produces their
Cartesian product as output.*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int A[10], B[10];

    cout << "Enter the number of elements of set A: ";
    cin >> n1;
    cout << "Enter the elements of set A: ";
    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }

    cout << "Enter the number of elements of set B: ";
    cin >> n2;
    cout << "Enter the elements of set B: ";
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    cout << "The Cartesian product of (A x B):" << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cout << "(" << A[i] << "," << B[j] << ") ";
        }
    }

    cout << endl;
    return 0;
}
