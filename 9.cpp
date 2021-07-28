//Program that calculates the number of diagonals in a convex polygon based on the number of sides.

#include <iostream>

using namespace std;

//function that calculates the number of diagonals

int calculateDiagonals(int numberOfSides){
    return (numberOfSides * (numberOfSides - 3) / 2);
}

int main (void){
    int numberOfSides, numberOfDiagonals;

    cout << "Type the number of sides of the polygon.\n";
    cin >> numberOfSides;

    numberOfDiagonals = calculateDiagonals(numberOfSides);

    cout << "The number of diagonals in the polygon is " << numberOfDiagonals;
    return 0;
}