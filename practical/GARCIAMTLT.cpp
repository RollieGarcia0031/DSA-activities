#include <iostream>

using namespace std;

int getNumber();
char getCharEquivalent(int);

int main(){

    // initialize 2D array with limit of 50x50
    int rows, cols, num_input;
    int table[50][50];
    char table2[50][50];

    cout << "----Enter array dimensions----" << endl;
    // get input values for rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    cout << endl << "Enter array values" << endl;
    // get input value for the upper half of 2D array
    for (int y = 0; y < rows/2; y ++){
        for(int x = 0; x < cols; x ++){
            cout << "Enter number (1-26)(Row " << y+1 << ", Column " << x+1 << "): ";
            num_input = getNumber();
            table[y][x] = num_input;
            table2[y][x] = getCharEquivalent(num_input);
        }
    }

    // fill the lower half with equivalent lower-case number
    for (int y = (rows/2); y < rows; y ++){
        for (int x = 0; x < cols; x ++){
            table[y][x] = table[y- (rows/2)][x] + 26;
        }
    }

    cout << endl << "- - - Letter table - - - " << endl;

    // fill up the lower half of table with equivalent lower-case letter
    for (int y = (rows/2); y < rows; y ++){
        for (int x = 0; x < cols; x ++){
            table2[y][x] = getCharEquivalent(table[y- (rows/2)][x] + 26);
        }
    }

    // print the array containing letters 
    for (int y = 0; y < rows; y ++){
        cout << " ";
        for(int x = 0; x < cols; x ++){
            cout << table2[y][x] << ",\t";
        }
        cout << endl;
    }


    // find the index of the smallest number in the 2D array
    // using linear search
    int min_row_index = 0;
    int min_col_index = 0;

    for (int y = 0; y < rows; y ++){
        for(int x = 0; x < cols; x ++){
            int smallest = table[min_row_index][min_col_index];
            int currentElement = table[y][x];
            if(smallest > currentElement){
                min_row_index = y;
                min_col_index = x;
            }
        }
    }

    // display the smallest number found in the 2D array
    int smallestNumber = table[min_row_index][min_col_index];
    cout << endl << "Smallest: " << smallestNumber << endl;
    cout << "Found at index: [" << min_row_index << "]" << "[" << min_col_index << "]" << endl;
    cout << "Equivalent alphabet character: " << getCharEquivalent(smallestNumber) << endl;
    return 0;
}

// get input number ranging from 1-26 only
int getNumber(){
    int input;

    bool running = true;
    while(running){
        cin >> input;
        
        if(input <= 26 && input > 0){
            return input;
            running = false;
        } else {
            cout << "Only numbers 1-26 is allowed!";
        }
    }

    return 0;
}

// retrieve a char based on a given number
// it returns capital letters A-Z for 1-26
// and return small letters a-z for 27-52
char getCharEquivalent(int num){
    switch (num){

        case 1:
            return 'A';
            break;

        case 2:
            return 'B';
            break;

        case 3:
            return 'C';
            break;

        case 4:
            return 'D';
            break;

        case 5:
            return 'E';
            break;

        case 6:
            return 'E';
            break;

        case 7:
            return 'G';
            break;

        case 8:
            return 'H';
            break;

        case 9:
            return 'I';
            break;

        case 10:
            return 'J';
            break;

        case 11:
            return 'K';
            break;

        case 12:
            return 'L';
            break;

        case 13:
            return 'M';
            break;

        case 14:
            return 'N';
            break;

        case 15:
            return 'O';
            break;

        case 16:
            return 'P';
            break;

        case 17:
            return 'Q';
            break;

        case 18:
            return 'R';
            break;

        case 19:
            return 'S';
            break;

        case 20:
            return 'T';
            break;

        case 21:
            return 'U';
            break;

        case 22:
            return 'V';
            break;

        case 23:
            return 'W';
            break;

        case 24:
            return 'X';
            break;

        case 25:
            return 'Y';
            break;

        case 26:
            return 'Z';
            break;


        // lower case letters
        case 27:
            return 'a';
            break;

        case 28:
            return 'b';
            break;

        case 29:
            return 'c';
            break;

        case 30:
            return 'd';
            break;

        case 31:
            return 'e';
            break;

        case 32:
            return 'f';
            break;

        case 33:
            return 'g';
            break;

        case 34:
            return 'h';
            break;

        case 35:
            return 'i';
            break;

        case 36:
            return 'j';
            break;

        case 37:
            return 'k';
            break;

        case 38:
            return 'l';
            break;

        case 39:
            return 'm';
            break;

        case 40:
            return 'n';
            break;

        case 41:
            return 'o';
            break;

        case 42:
            return 'P';
            break;

        case 43:
            return 'q';
            break;

        case 44:
            return 'r';
            break;

        case 45:
            return 's';
            break;

        case 46:
            return 't';
            break;

        case 47:
            return 'u';
            break;

        case 48:
            return 'v';
            break;

        case 49:
            return 'w';
            break;

        case 50:
            return 'x';
            break;

        case 51:
            return 'y';
            break;

        case 52:
            return 'z';
            break;

    }

    return ' ';
}
