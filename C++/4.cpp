//Program that receives two grades and calculates the weighted average between them. (Fist grade weight = 2 and second grade weight = 3)

#include <iostream>

using namespace std;

//Function that returns the weighted avarage between the two grades
float calculateAvarage(float g1, float g2){
    return ((g1 * 2) * (g2 * 3) / 2);
}

int main (void){
    float n1, n2, result;

    cout << "Type the first grade \n"; //First number
    cin >> n1;

    cout << "Type the second grade \n"; //Second number
    cin >> n2;

    result = calculateAvarage(n1, n2);

    cout << "The weighted avarage between "<< n1 << " and " << n2 << " is equal to " << result;

    return 0;
}