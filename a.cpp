#include <iostream>
#include <cmath>
using namespace std;
float Area(float a, float b, float c) {
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area; 
}
int main() {
    float a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    float result = Area(a, b, c);
    cout << "Area of triangle = " << result << endl; 
    return 0;
}