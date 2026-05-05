#include <iostream>
using namespace std;

// Define structure
struct Student {
    string name;
    string address;
    int roll;
}s;
int main() {
    
    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter address: ";
    cin >> s.address;

    cout << "Enter roll number: ";
    cin >> s.roll;

    // Output
    cout << "\n--- Student Record ---" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Address: " << s.address << endl;
    cout << "Roll Number: " << s.roll << endl;

    return 0;
}