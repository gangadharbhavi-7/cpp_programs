#include <iostream>
#include <fstream>
using namespace std;


struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1;
    t1.hours = 13;
    t1.minutes = 45;
    t1.seconds = 30;

    fstream file("time.dat", ios::out | ios::binary);
    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file.write(reinterpret_cast<char*>(&t1), sizeof(t1));
    file.close();
    cout << "Time written to binary file successfully." << endl;

    Time t2;
    file.open("time.dat", ios::in | ios::binary);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    file.read(reinterpret_cast<char*>(&t2), sizeof(t2));
    file.close();

    cout << "Time read from binary file:" << endl;
    cout << t2.hours << ":" << t2.minutes << ":" << t2.seconds << endl;

    return 0;
}