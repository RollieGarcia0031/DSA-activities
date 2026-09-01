#include <iostream>

using namespace std;

double getSum(double num1, double num2, double ref1, double ref2);
double getAverage(double num1, double num2, double ref1, double ref2);
double getProduct(double num1, double num2, double ref1, double ref2);

int main(){

    // choose option 1 or 2
    int option;
    cout << "Choose option (1,2): ";
    cin >> option;

    cout << endl;

    switch (option){

        // SET A problem:
        case 1 :                                                                                {

            // declare input and their pointers
            double input1, input2;
            double *ptrInput1 = &input1;
            double *ptrInput2 = &input2;

            // take user input number
            cout << "Insert value of Num-1: ";
            cin >> input1;

            cout << "Insert value of Num-2: ";
            cin >> input2;

            // use pointer to modify the value
            *ptrInput1 = 20;
            *ptrInput2 += 50;

            // display address and values of both pointers and variables
            cout << endl
                 << "-------------------------------------------------" << endl
                 << " Variable\t| Address\t| Value" << endl
                 << "-------------------------------------------------" << endl
                 << " input1\t\t| "  << &input1    << "| " << input1    << endl
                 << " input2\t\t| "  << &input2    << "| " << input2    << endl
                 << " ptrInput1\t| " << &ptrInput1 << "| " << ptrInput1 << endl
                 << " ptrInput2\t| " << &ptrInput2 << "| " << ptrInput2 << endl

                 << endl;
            break;
                                                                                                                           }

        // SET B problem:
        case 2: {

            // declare inputs and their reference
            double input1, input2;
            double &refInput1 = input1;
            double &refInput2 = input2;

            // take user input
            cout << "Enter First number: " << "";
            cin >> input1;

            cout << "Enter second number: ";
            cin >> input2;

            // calculate sum, average, products
            double sum, average, product;

            sum = getSum(input1, input2, refInput1, refInput2);
            average = getAverage(input1, input2, refInput1, refInput2);
            product = getProduct(input1, refInput2, refInput1, refInput2);

            // display results
            cout << endl 
                 << "------------------------"  << endl
                 << " Variables\t| Values"      << endl
                 << "------------------------"  << endl 
                 << " num1\t\t| "  << input1    << endl
                 << " num2\t\t| "  << input2    << endl
                 << " ref1\t\t| "  << refInput1 << endl
                 << " ref2\t\t| "  << refInput2 << endl
                 << " sum\t\t| "   << sum       << endl
                 << " average\t| " << average   << endl
                 << " product\t| " << product   << endl
                 << endl;

            break;
        }

    }
    return 0;
}

// returns sum of 4 numbers
double getSum(double num1, double num2, double ref1, double ref2){
    return num1 + num2 + ref1 + ref2;
}

// returns average of 4 numbers
double getAverage(double num1, double num2, double ref1, double ref2){
    return (num1 + num2 + ref1 + ref2) / 4;
}

// returns product of 4 numbers
double getProduct(double num1, double num2, double ref1, double ref2){
    return num1 * num2 * ref1 * ref2;
}
