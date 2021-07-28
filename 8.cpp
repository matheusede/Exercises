//Program that receives the value of two angles from a triangle and calculates the value of the remaining one.

#include <iostream>

using namespace std;

//Function that calculates the remaining angle.
float calculatesAngle(float firstAngle, float secondAngle){
    return (180 - (firstAngle + secondAngle));
}

int main(void){
    float fistAngle, secondAngle, thirdAngle;

    cout << "Insert the value of the first angle.\n";
    cin >> fistAngle;

    cout << "Insert the value of the second angle.\n";
    cin >> secondAngle;

    thirdAngle = calculatesAngle(fistAngle, secondAngle);

    cout << "The value of the third angle is " << thirdAngle <<".";
    return 0;
}