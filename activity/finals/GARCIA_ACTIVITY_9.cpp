#include <iostream>

using namespace std;

void printTable(int table[3][3]);
void enqueue(int [3][3], int &, int, const int, const int);
void dequeue(int table[3][3], int &size, const int cols);
void push(int table[3][3], int &size, int value, const int rows, const int cols);
void pop(int table[3][3], int &size, const int cols);
int getThreeDigitNumber();

int main(){
    int table[3][3] = {
        {243, 654, 742},
        {631, 921, 123},
        {412, 741}
    };

    int rows = 3,
        cols = 3,
        size = 8;

    int option, inputNumber;

    cout << "\nCurrent Table" << endl;
    printTable(table);
    cout << "\n";


    while (true){

        // take user input for option
        cout << "Insert your option: " << endl
             << " 1. Enqueue " << endl
             << " 2. Dequeue " << endl
             << " 3. Push " << endl
             << " 4. Pop " << endl
             << " 5. Exit Program " << endl
             << "  Option: "
        ;

        cin >> option;

        // ask for number input for option 1 & 3
        if (option == 1 || option == 3){
            cout << "\nInsert a 3 digit number: ";
            inputNumber = getThreeDigitNumber();
        }

        switch (option) {
            case 1:
                enqueue(table, size, inputNumber, rows, cols);
                break;
            case 2:
                dequeue(table, size, cols);
                break;
            case 3:
                push(table, size, inputNumber, rows, cols);
                break;
            case 4:
                pop(table, size, cols);
                break;
            case 5:
                cout << "Exiting program" << endl;
                return 0;
            default:
                cout << "invalid input!";
        }

        cout << "\n ------------------- Result Table -------------------\n";
        printTable(table);
        cout << "------------------- Result Table -------------------\n\n";
    }
    return 0;
}

void enqueue(int table[3][3], int &size, int value, const int rows, const int cols){
    if (size >= rows * cols){
        cout << "Queue is full, cannot enqueue " << value << endl;
        return;
    }

    table[size / cols][size % cols] = value;
    size++;
}

void pop(int table[3][3], int &size, const int cols) {
    if (size == 0){
        cout << "Queue is empty, cannot dequeue" << endl;
        return;
    }

    for (int i = 0; i < size - 1; i++){
        table[i / cols][i % cols] = table[(i + 1) / cols][(i + 1) % cols];
    }

    size--;
    table[size / cols][size % cols] = 0;
}

void push(int table[3][3], int &size, int value, const int rows, const int cols){
    if (size >= rows * cols){
        cout << "Stack is full, cannot push " << value << endl;
        return;
    }

    table[size / cols][size % cols] = value;
    size++;
}

void dequeue(int table[3][3], int &size, const int cols){
    if (size == 0){
        cout << "Stack is empty, cannot pop" << endl;
        return;
    }

    size--;
    table[size / cols][size % cols] = 0;
}

void printTable(int table[3][3]){
    for (int y = 0; y < 3; y ++){
        for (int x = 0; x < 3; x ++){
            cout << " " << table[y][x] << "\t";
        }
        cout << endl;
    }
}

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

