#include <iostream>
#include <ostream>

using namespace std;

double getSum(double num1, double num2, double ref1, double ref2);
double getAverage(double num1, double num2, double ref1, double ref2);
double getProduct(double num1, double num2, double ref1, double ref2);

int main(){

    double input1;
    double &refInput1 = input1;
    double input2;
    double &refInput2 = input2;

    cout << "Enter First number: " << "";
    cin >> input1;

    cout << "Enter second number: ";
    cin >> input2;

    double sum, average, product;

    sum = getSum(input1, input2, refInput1, refInput2);
    average = getAverage(input1, input2, refInput1, refInput2);
    product = getProduct(input1, refInput2, refInput1, refInput2);

    cout << endl 
         << "------------------------" << endl
         << " Variables\t| Values" << endl
         << "------------------------" << endl 
         << " num1\t\t| " << input1 << endl
         << " num2\t\t| " << input2 << endl
         << " ref1\t\t| " << refInput1 << endl
         << " ref2\t\t| " << refInput2 << endl
         << " sum\t\t| " << sum << endl
         << " average\t| " << average << endl
         << " product\t| " << product << endl
         << endl;

    return 0;
}

double getSum(double num1, double num2, double ref1, double ref2){
    return num1 + num2 + ref1 + ref2;
}

double getAverage(double num1, double num2, double ref1, double ref2){
    return (num1 + num2 + ref1 + ref2) / 4;
}

double getProduct(double num1, double num2, double ref1, double ref2){
    return num1 * num2 * ref1 * ref2;
}
