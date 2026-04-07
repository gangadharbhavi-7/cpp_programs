#include <iostream>
using namespace std;

int getElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Array index out of bounds!");
    }
    return arr[index];
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index to access (0 to " << SIZE-1 << "): ";
    cin >> index;

    try {
        int value = getElement(arr, SIZE, index);
        cout << "Value at index " << index << " is: " << value << endl;
    }
    catch (out_of_range &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}