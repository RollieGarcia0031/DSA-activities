#include <iostream>

using namespace std;
int getThreeDigitNumber();

int main(){

    // declare the 4x4 table
    int rows = 4;
    int cols = 4;
    int table[4][4];

    // input 3 digit number on each cell of table
    cout << endl << endl << " ------------- Enter a three digit number ------------- " << endl;
    for (int row = 0; row < rows; row++){

        for (int col = 0; col < cols; col++){

            cout << "Row " << row+1 << ", Column " << col+1 << " : ";

            int inputNumber = getThreeDigitNumber();
            table[row][col] = inputNumber;
        }
    }

    // assume the first element as the max
    int max = table[0][0];

    // compare each element and print to find the max
    cout << endl << endl << " ------------- Table ------------- " << endl;
    cout << " ________________________________" << endl;

    for (int row = 0; row < rows; row++){

        for(int col = 0; col < cols; col ++){
            cout << " | " << table[row][col] << "\t";

            int currentElement = table[row][col];

            if(max < currentElement){
                max = currentElement;
            }
        }
        cout << "| " << endl;
    }

    // print the max number
    cout << endl << "Max number: " << max << endl;

    return 0;
}

// runs a loop that only stop when a 3 digit number
// is entered by the user
int getThreeDigitNumber(){
    int input;
    int running = true;

    while(running){
        cin >> input;

        bool hasMoreThan2Digit = (input > 0 && input > 99) || (input < 0 && input < -99);
        bool hasLessThan4Digit = (input > 0 && input < 1000) || (input < 0 && input > -1000); 

        if (hasMoreThan2Digit && hasLessThan4Digit){
            running = false;
            return input;
        } else {
            cout << "use three digit number only!:  "; 
        }
    }

    return 0;
}

