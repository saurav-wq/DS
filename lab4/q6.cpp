#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[100], n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter value to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);
    if (index == -1)
        cout << "Element not found.\n";
    else
        cout << "Element found at index " << index << ".\n";
    return 0;
}