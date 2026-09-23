#include <iostream>

using namespace std;

int getNumber();
char getCharEquivalent(int);
void print2DCharArray(char table[50][50], int, int);
void print2DIntArray(int table[50][50], int , int);
int setA();
int setB();

int main(){
    // take user input for problem set

    int input_option;
    cout << "Insert option for problem set: (1,2) ";
    cin >> input_option;

    cout << endl << endl;
    switch(input_option){
        case 1:
            setA();
            break;
        case 2:
            setB();
            break;
        default:
            cout << " Invalid Option! " << endl << endl;
    }
}

int setA(){
    cout << " - - - - - - SET A - - - - - - " << endl;

    int rows, cols;
    int int_table[50][50];
    char char_table[50][50];

    // get the row input
    cout << endl <<  "Insert the number of rows: ";
    cin >> rows;
    cols = rows;

    // insert value to each element of array
    for (int y = 0; y < rows; y++){
        for (int x = 0; x < cols; x++){
            cout << "Insert a number between 1-26:";
            int input = getNumber();
            int_table[y][x] = input;
            char_table[y][x] = getCharEquivalent(input);
        }
    }

    // print the number and letter array:
    cout << endl << "Number Array" << endl;
    print2DIntArray(int_table, rows, cols);

    cout << "Letter Array" << endl;
    print2DCharArray(char_table, rows, cols);

    // ask user for target character:
    char targetChar;
    cout << endl << "Insert the character to be searched in table: ";
    cin >> targetChar;

    // find the target character using linear search
    int found_index_row = 0;
    int found_index_col = 0;
    bool element_found = false;
    for (int y = 0; y < rows; y++){
        for (int x = 0; x < cols; x++){
            char element = char_table[y][x];
            if (element == targetChar){
                found_index_row = y;
                found_index_col = x;
                element_found = true;
            }
        }
    }

    if (element_found){
        cout << "Found at index: (" << found_index_row << ", " << found_index_col << ")" << endl;
    } else {
        cout << "Element '" << targetChar << "' not found!" << endl;
    }

    return 0;
}

int setB(){
    cout << " - - - - - - SET B - - - - - - " << endl;

    // initialize 2D array with limit of 50x50
    int rows, cols, num_input;
    int int_table[50][50];
    char char_table[50][50];

    cout << endl << "----Enter array dimensions----" << endl;
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
            int_table[y][x] = num_input;

            int mirrored_y = (rows/2)-y-1;
            char_table[mirrored_y][x] = getCharEquivalent(num_input);
        }
    }

    // find the index of the smallest number in the 2D array
    // using linear search
    int min_row_index = 0;
    int min_col_index = 0;

    for (int y = 0; y < rows/2; y ++){
        for(int x = 0; x < cols; x ++){
            int smallest = int_table[min_row_index][min_col_index];
            int currentElement = int_table[y][x];
            if(smallest > currentElement){
                min_row_index = y;
                min_col_index = x;
            }
        }
    }

    // print the table containing letters and number
    cout << endl << "Array Values" << endl;
    print2DIntArray(int_table, rows/2, cols);
    cout << "---------------------" << endl; 
    print2DCharArray(char_table, rows/2, cols);


    // display the smallest number found in the 2D array
    int smallestNumber = int_table[min_row_index][min_col_index];
    cout << endl << "Smallest: " << smallestNumber << endl;
    cout << "Found at index: [" << min_row_index << "]" << "[" << min_col_index << "]" << endl;
    cout << "Equivalent alphabet character: " << getCharEquivalent(smallestNumber) << endl;
    return 0;
}

void print2DIntArray(int table[50][50], int rows, int cols){
    // print the array containing letters 
    for (int y = 0; y < rows; y ++){
        cout << " ";
        for(int x = 0; x < cols; x ++){
            cout << table[y][x] << ",\t";
        }
        cout << endl;
    }
}

void print2DCharArray(char table[50][50], int rows, int cols){

    // print the array containing letters 
    for (int y = 0; y < rows; y ++){
        cout << " ";
        for(int x = 0; x < cols; x ++){
            cout << table[y][x] << ",\t";
        }
        cout << endl;
    }
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
// it returns capital letters a-z for 1-26
char getCharEquivalent(int num){
    char letters[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
        't', 'u', 'v', 'w', 'x', 'y', 'z'
    };

    if(num <= 26 && num > 0)
        return letters[num-1];

    return ' ';
}

