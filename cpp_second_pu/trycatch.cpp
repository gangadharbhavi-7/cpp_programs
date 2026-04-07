#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error!");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num, den;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try {
        double result = divide(num, den);
        cout << "Result: " << result << endl;
    }
    catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}