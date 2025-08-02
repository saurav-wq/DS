/*1. Write a program that takes two or more sets as input and produces set
operations like union, intersection, difference and symmetric difference as
its output*/

#include <iostream>
using namespace std;
int main() {
    int A[100], B[100], n1, n2;
    cout << "Enter number of elements of A: " << endl; cin >> n1;
    cout << "Enter elements of A: " << endl; for (int i = 0; i < n1; i++) cin >> A[i];
    cout << "Enter number of elements of B: " << endl; cin >> n2;
    cout << "Enter elements of B: " << endl; for (int i = 0; i < n2; i++) cin >> B[i];
    cout << "\nUnion:" << endl;
    for (int i = 0; i < n1; i++) cout << A[i] << " ";
    for (int i = 0; i < n2; i++) {
        int cnt = 0;
        for (int j = 0; j < n1; j++) if (B[i] == A[j]) cnt++;
        if (cnt == 0) cout << B[i] << " ";
    }
    cout << "\nIntersection:" << endl;
    for (int i = 0; i < n1; i++) for (int j = 0; j < n2; j++) if (A[i] == B[j]) { cout << A[i] << " "; break; }
    cout << "\nDifference (A - B):" << endl;
    for (int i = 0; i < n1; i++) {
        int cnt = 0;
        for (int j = 0; j < n2; j++) if (A[i] == B[j]) cnt++;
        if (cnt == 0) cout << A[i] << " ";
    }
    cout << "\nSymmetric Difference:" << endl;
    for (int i = 0; i < n1; i++) {
        int cnt = 0;
        for (int j = 0; j < n2; j++) if (A[i] == B[j]) cnt++;
        if (cnt == 0) cout << A[i] << " ";
    }
    for (int i = 0; i < n2; i++) {
        int cnt = 0;
        for (int j = 0; j < n1; j++) if (B[i] == A[j]) cnt++;
        if (cnt == 0) cout << B[i] << " ";
    }
    cout << endl;
    return 0;
}
