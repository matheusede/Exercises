//Program that calculates the area of a square

#include <iostream>
#include <math.h>
using namespace std;

//Function that calculates the area of the square;
void calculatesArea(int side){
    cout << "Area = " << pow(side, 2);
}

int main (void){
    int side;

    cout << "Type the value of the side of the square.\n";
    cin >> side;

    calculatesArea(side);

    return 0;
}