#include <iostream>

using namespace std;

int main(){
    // declare the table and its size
    int maxRows = 4;
    int maxCols = 4;
    
    int targetNumber;

    int table[4][4] = {
        {123,124,125,126},
        {234,235,236,237},
        {342,343,346,349},
        {451,459,460,470},
    };

    // print the table's contents
    cout << endl << endl << "- - - - - - TABLE- - - - - -" << endl;
    for (int rowIndex = 0; rowIndex < maxRows; rowIndex ++){
        cout << " ";
        for (int colIndex = 0; colIndex < maxCols; colIndex ++){
            cout << table[rowIndex][colIndex] << "\t";
        }
        cout << endl;
    }

    // ask for user input (target number)
    cout << endl << "Enter the target number: ";
    cin >> targetNumber;

    // start the search
    int mid_col_index;
    bool numberIsFound = false;

    // declare the middle index of array
    if(maxCols % 2 == 0){
        mid_col_index = (maxCols / 2) - 1;
    } else {
        mid_col_index = maxCols / 2;
    }

    // run a loop to go through each rows
    for (int rowIndex = 0; rowIndex < maxRows; rowIndex ++){
        int midValue = table[rowIndex][mid_col_index];

        // check if the middle value on each row matches the target number
        if (midValue == targetNumber){
            cout << "Found at : Row " << rowIndex+1 << ", Column " << mid_col_index+1;
            numberIsFound = true;
        } else if (targetNumber > midValue) {

            // search on the right side of columns of target value is greater than the middle value
            for (int colIndex = mid_col_index; colIndex < maxCols; colIndex ++){
                if (table[rowIndex][colIndex] == targetNumber){
                    cout << "Found at : Row " << rowIndex+1 << ", Column " << colIndex+1;
                    numberIsFound = true;
                    break;
                }
            }
        } else {

            // search on the left side of column if target value is less than the middle value;
            for (int colIndex = mid_col_index; colIndex >= 0; colIndex --){
                if (table[rowIndex][colIndex] == targetNumber){
                    cout << "Found at : Row " << rowIndex+1 << ", Column " << colIndex+1;
                    numberIsFound = true;
                    break;
                }
            }
        }
    }
    cout << endl << endl;

    if (!numberIsFound){
        cout << "Number not found!" << endl;
    }

    return 0;
}

