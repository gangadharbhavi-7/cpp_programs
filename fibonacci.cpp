#include <iostream>
using namespace std;

// Function to calculate Fibonacci series
void fibonacci(int n) {
    int t1 = 0, t2 = 1;
    int nextTerm;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    for (int i = 1; i <= n - 2; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
}

int main() {
    int n;
    cout << "enter n value:" << n;
    co
