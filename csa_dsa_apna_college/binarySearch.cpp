#include <iostream>
using namespace std;

int bin(int arr[], int n, int tar) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == tar) {
            return mid;  // found
        }
        else if (arr[mid] < tar) {
            low = mid + 1;  // search right half
        }
        else {
            high = mid - 1; // search left half
        }
    }
    return -1; // not found
}

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element to search: ";
    cin >> key;
    int ind = bin(arr, n, key);
    if (ind != -1)
        cout << "Element is found at index " << ind << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
