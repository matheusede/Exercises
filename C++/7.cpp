//Program that calculates the hypotenuse of a triangle based on the size of the remaining sides.

#include <iostream>
#include <math.h>

using namespace std;

// Pythagorean theorem.
float pythagoreanTheorem(float sideA, float sideB){
    return sqrt(pow(sideA, 2) + pow(sideB, 2));
}

int main(void){
    float sideA, sideB, result;

    cout << "Type the velue of side A of the triangle (side c is the hypotenuse)\n";
    cin >> sideA;

    cout << "Type the velue of side B of the triangle (side c is the hypotenuse)\n";
    cin >> sideB;

    result = pythagoreanTheorem(sideA, sideB);

    cout << "The value of the hypotenuse is " << result;

    return 0;
}