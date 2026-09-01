#include <iostream>
#include <string>

using namespace std;

void print_hollow(int&, string);
void print_solid(int&, string);

int main(){

    // insert amount of rows and columns
    string symbol = "@";
    int rows, cols, half_row;

    cout << "Insert rows:";
    cin >> rows;

    // adjust the columns to
    // make it square-like shape
    cols = rows * 2 + 1;

    // declare wich half would be
    // the divider of square
    if (rows % 2 == 0) {
        half_row = rows / 2 - 1;
    } else {
        half_row = rows / 2;
    }

    // print the upper border
    print_solid(cols, symbol);

    // print the inside of square
    for (int y = 0; y < rows-2; y ++){
        if (y < half_row){
            // solid for upper half
            print_solid(cols, symbol);

        } else {

            // hollow for lower half           
            print_hollow(cols, symbol);
        }
    }

    print_solid(cols, symbol);

    return 0;
}

// print rows that are not filled with symbol
void print_hollow(int &cols, string symbol){
    cout << symbol;
    for (int i = 1; i < cols-1; i ++){
        if (i == cols/2){
            cout << symbol;
        } else {
            cout << " ";
        }
    }
    cout << symbol;
    cout << endl;
}

void print_solid(int& cols, string symbol) {
    for (int i = 0; i < cols; i ++){
        cout << symbol;
    }
    cout << endl;
}
