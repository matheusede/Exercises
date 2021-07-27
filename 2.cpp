//Program that receive three numbers and returns the multiplication between them.

#include <iostream>

using namespace std;

//Function that returns the multiplication
float multiplicateNumbers(int n1, int n2, int n3){
    return n1 * n2 * n3;
}

int main (void){
    float n1, n2, n3, result;

    cout << "Type any number \n"; //First number
    cin >> n1;

    cout << "Type any number \n"; //Second number
    cin >> n2;

    cout << "Type any number \n"; //Third number
    cin >> n3;

    result = multiplicateNumbers(n1, n2, n3);

    cout << n1 << " * " << n2 << " * " << n3 << " is equal to " << result;

    return 0;
}