#include <iostream>

using namespace std;

void insert(int [4][4], int, int, const int, const int, int, int&);
void deleteElem(int[4][4], int, int, const int, const int, int &);
void printTable(int [4][4], int, int);

int main(){
    int option = 0,
        rows = 4,
        cols = 4,
        size = 15;

    // initialize table
    int table[4][4] = {
        {12, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 43, 23, 63},
        {52, 54, 23}
    };

    // insert user option
    cout << "Choose an option: " << endl
        << "  1. Insert" << endl
        << "  2. Delete" << endl
        << "  3. Copy" << endl
        << "  Input: ";
    cin >> option;

    // show table before operation
    cout << endl;
    printTable(table, rows, cols);
    int rowTarget, colTarget, value;

    // perform needed operation
    switch (option){
        case(1):
            cout << "\nWhich Row? ";
            cin >> rowTarget;
            cout << "Which Column? ";
            cin >> colTarget;
            cout << "Insert number value: ";
            cin >> value;

            insert(table, rowTarget, colTarget, rows, cols, value, size);
            break;

        case(2):
            cout << "\nWhich Row? ";
            cin >> rowTarget;
            cout << "Which Column? ";
            cin >> colTarget;

            deleteElem(table, rowTarget, colTarget, rows, cols, size);
            break;

        case(3):
            break;
        default:
            cout << "invalid option" << endl;
    }
   
    cout << "\n________ Result:  _______\n";
    printTable(table, rows, cols);
    return 0;
}

void insert(int table[4][4], int row, int col, const int MAX_ROWS, const int MAX_COLS, int value, int &size){
    int position = col + (row * MAX_COLS);

    if (size > MAX_ROWS * MAX_COLS){
        cout << "Cannot insert, array has reached limit";
    } else {
        // shift elements to the right
        for (int i = size - 1; i >= position; i --){
            table[(i + 1)/MAX_COLS][(i + 1)%MAX_COLS] = table[i / MAX_COLS][i % MAX_COLS];
        }

        table[row][col] = value;
        size ++;
    }

}

void deleteElem(int table[4][4], int row, int col, const int MAX_ROWS, const int MAX_COLS, int &size){
    int position = col + (row * MAX_COLS);

    if (size == 0){
        cout << "Cannot delete an empty array!" << endl;
    } else if (position >= size){
        cout << "Cannot delete empty cell" << endl;
    } else {
        // shift elements to the left
        for (int i = position; i < size-1; i ++){
            table[i / MAX_COLS][i % MAX_COLS] = table[(i+1) / MAX_COLS][(i+1) % MAX_COLS];
        }

        size --;
        table[size / MAX_COLS][size % MAX_COLS] = 0;
    }

}

void printTable(int table[4][4], int rows, int cols){
    for (int y = 0; y < rows; y ++){
        for (int x = 0; x < cols; x ++){
            int num = table[y][x];
            if (num == 0)
                cout << "--";
            else
                cout << table[y][x];
            cout << "\t";
        }
        cout << endl;
    }
}
