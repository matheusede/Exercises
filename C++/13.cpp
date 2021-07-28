//Program that calculates the area of a trapezoid

#include <iostream>
#include <math.h>
using namespace std;

//Function that calculates the area
void calculatesArea(float smallerBase, float largerBase, float height){
    
    cout << "Area = " << (((smallerBase + largerBase ) * height) / 2);
}

int main(void){
    int smallerBase, largerBase, height;
    
    cout << "Type the value of the larger base.\n";
    cin >> largerBase;

    cout << "Type the value of the smaller base.\n";
    cin >> smallerBase;

    cout << "Type the value of the height of the trapezoid.\n";
    cin >> height;
    
    calculatesArea(smallerBase, largerBase, height);
    return 0;
}