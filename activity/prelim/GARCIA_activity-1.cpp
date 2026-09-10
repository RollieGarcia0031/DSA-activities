#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "Insert your first number: ";
    cin >> num1;
    
    cout << "Insert your second number: ";
    cin >> num2;

    cout << endl;
    cout << "sum: ";
    cout << num1 << " + " << num2 << " = ";
    cout << num1 + num2;

    cout << endl;
    cout << "difference: ";
    cout << num1 << " - " << num2 << " = ";
    cout << num1 - num2;

    cout << endl;
    cout << "product: ";
    cout << num1 << " * " << num2 << " = ";
    cout << num1 * num2;

    cout << endl;
    cout << "quotient: ";
    cout << num1 << " / " << num2 << " = ";
    cout << num1 / num2;

    cout << endl << endl;
    return 0;
}
