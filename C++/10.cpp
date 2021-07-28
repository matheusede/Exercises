//Porgram that shows the multiplication table of any number typed by the user.

#include <iostream>
using namespace std;

//Function that calculates the multiplication table.
void calculatesMultiplicationTable(int n){
    
    for (int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << ".\n";
    }
}

int main(void){
    int n;

    cout << "Type the number that will be calculated.\n";
    cin >> n;

    calculatesMultiplicationTable(n);

    return 0;
}