#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;
const int CAPACITY = ROWS * COLS;

// The 2D array is treated as row-major: position = row * COLS + col
int arr[ROWS][COLS] = {
    {10, 20, 30, 40},
    {50, 60, 70, 80},
    {90, 0, 0, 0}
};

int copyArr[ROWS][COLS];
int arr_size = 9;   // number of elements currently stored (capacity is 12)

void printArray(int a[ROWS][COLS], int size) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i * COLS + j < size) cout << a[i][j] << "\t";
            else cout << "-\t";
        }
        cout << endl;
    }
}

void insertElement() {
    if (arr_size == CAPACITY) {
        cout << "Array is full. Cannot insert." << endl;
        return;
    }

    int row, col, num;
    cout << "Enter row (0-" << ROWS - 1 << "): ";
    cin >> row;
    cout << "Enter column (0-" << COLS - 1 << "): ";
    cin >> col;
    int pos = row * COLS + col;

    if (row < 0 || row >= ROWS || col < 0 || col >= COLS || pos > arr_size) {
        cout << "Invalid position. Must be within or right after the filled area." << endl;
        return;
    }

    cout << "Enter number to insert: ";
    cin >> num;

    // move elements 1 index to the right (from the last element down to pos)
    for (int index = arr_size - 1; index >= pos; index--) {
        arr[(index + 1) / COLS][(index + 1) % COLS] = arr[index / COLS][index % COLS];
    }

    arr[pos / COLS][pos % COLS] = num;
    arr_size++;
}

void deleteElement() {
    if (arr_size == 0) {
        cout << "Array is empty. Cannot delete." << endl;
        return;
    }

    int row, col;
    cout << "Enter row (0-" << ROWS - 1 << "): ";
    cin >> row;
    cout << "Enter column (0-" << COLS - 1 << "): ";
    cin >> col;
    int pos = row * COLS + col;

    if (row < 0 || row >= ROWS || col < 0 || col >= COLS || pos >= arr_size) {
        cout << "Invalid position. No element there." << endl;
        return;
    }

    // move elements 1 index to the left
    for (int index = pos; index < arr_size - 1; index++) {
        arr[index / COLS][index % COLS] = arr[(index + 1) / COLS][(index + 1) % COLS];
    }

    arr_size--;
    arr[arr_size / COLS][arr_size % COLS] = 0;
}

void copyArray() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            copyArr[i][j] = arr[i][j];
        }
    }
    cout << "Array copied successfully." << endl;
    cout << "\nOriginal array:" << endl;
    printArray(arr, arr_size);
    cout << "\nCopied array:" << endl;
    printArray(copyArr, arr_size);
}

int main() {
    int choice;

    do {
        cout << "\nCurrent array:" << endl;
        printArray(arr, arr_size);

        cout << "\n===== MENU =====" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Copy" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertElement();
                cout << "\nResult:" << endl;
                printArray(arr, arr_size);
                break;
            case 2:
                deleteElement();
                cout << "\nResult:" << endl;
                printArray(arr, arr_size);
                break;
            case 3:
                copyArray();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
