#include <iostream>

using namespace std;

void getSum(double &sum, double &num1, double &num2);
void getAverage(double &average, double &num1, double &num2);
void getProduct(double &product, double &num1, double &num2);

int main(){

    double input1;
    double &refInput1 = input1;
    double input2;
    double &refInput2 = input2;

    cout << "Enter First number: " << "";
    cin >> input1;

    cout << "Enter second number: ";
    cin >> input2;

    double average;
    double sum; // average, product, sum initialization
    double product;

    getSum(sum, refInput1, refInput2);
    getAverage(average, refInput1, refInput2);
    getProduct(product, refInput1, refInput2);

    cout << "Sum : " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Product: " << product << endl;

    return 0;

}

void getSum(double &sum, double &num1, double &num2){
    sum = num1 + num2;
}

void getAverage(double &average, double &num1, double &num2){
    average = (num1 + num2) / 2;
}

void getProduct(double &product, double &num1, double &num2){
    product = num1 * num2;
}
