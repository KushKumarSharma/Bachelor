#include <iostream>
#include <cmath>
using namespace std;
float findArea() {
    float a, b, c, s, area;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
     s = (a + b + c) / 2; 
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;  
}

int main() {
    float result;
    result = findArea();  
    cout << "Area of triangle = " << result << endl;
    return 0;
}