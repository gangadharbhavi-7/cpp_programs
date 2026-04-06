#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    double p = 3.5, q = 4.7;

    cout << "Sum of integers: " << add(x, y) << endl;
    cout << "Sum of doubles: " << add(p, q) << endl;

    return 0;
}