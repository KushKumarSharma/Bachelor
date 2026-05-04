#include <iostream>
#include <cmath>
using namespace std;

// Function with arguments and NO return type
void Area(float a, float b, float c) {
    float s, area;

    s = (a + b + c) / 2;  // semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of triangle = " << area << endl;
}

int main() {
    float a, b, c;
    

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

      Area(a, b, c);  // calling function

    return 0;
}