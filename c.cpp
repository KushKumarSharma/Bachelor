#include <iostream>
#include <cmath>
using namespace std;

// Function with NO arguments and NO return type
void findArea() {
    float a, b, c, s, area;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2;  // semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of triangle = " << area << endl;
}

int main() {
    findArea();  // function call
    return 0;
}