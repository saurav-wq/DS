
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[100], n, key;
    cout << "Enter number of sorted elements: ";
    cin >> n;
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter value to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);
    if (index == -1)
        cout << "Element not found.\n";
    else
        cout << "Element found at index " << index << ".\n";
    return 0;
}


