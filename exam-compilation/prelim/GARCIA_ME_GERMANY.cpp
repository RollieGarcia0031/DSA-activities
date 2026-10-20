#include <iostream>

using namespace std;

void bubbleSort(int[], int, bool);
int getThreeDigitNumber();
void print_1D_array_as_2D(int table[100], int rows, int cols);

void setA();
void setB();

int main(){

    int option;
    cout << "Switch problem set: (1,2): " << endl;
    cin >> option;

    switch (option){
        case 1:
            setA();
            break;
        case 2:
            setB();
            break;
        default:
            cout << "invalid option" << endl;
    }

    return 0;
}

void setB(){
    int rows, cols;
    int table[100];

    cout << "Insert rows: ";
    cin >> rows;
    cout << "Insert cols: ";
    cin >> cols;


    for (int i = 0; i < rows * cols; i ++){
        cout << "Insert a 3-digit number";
        int input = getThreeDigitNumber();
        table[i] = input;
    }

    bubbleSort(table, rows*cols, false);
    
    cout << endl << "Table in descending order: " << endl;
    print_1D_array_as_2D(table, rows,  cols);
}

void setA(){
    int rows;
    int table[100];

    cout << "Insert number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows*rows; i ++){
        cout << "Insert a 3 digit integer: ";
        int input = getThreeDigitNumber();
        table[i] = input;
    }

    bubbleSort(table, rows*rows, true);
    cout << endl << "Sorted as Table: " << endl;
    print_1D_array_as_2D(table,rows, rows);
}

void bubbleSort(int arr[], int size, bool ascending){
    
    // iterate by using a moving starting index
    for (int startingIndex = 0; startingIndex < size-1; startingIndex ++){
        // start the index from zero, then ignore the last element (as it is assumed
        // to be already the greatest one)
        for (int currentIndex = 0; currentIndex < (size - 1 - startingIndex); currentIndex++){
            int currentElem = arr[currentIndex];
            int nextElement = arr[currentIndex + 1];

            // check if next element is smaller than current element
            if((ascending && currentElem > nextElement) || (!ascending && currentElem < nextElement) ){
                // swap the current element to next element
                int temp = arr[currentIndex];
                arr[currentIndex] = arr[currentIndex+1];
                arr[currentIndex+1] = temp;
            }
            
        }
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

void print_1D_array_as_2D(int table[100], int rows, int cols){
    for (int y = 0; y < rows; y ++){
        for (int x = 0; x < cols; x ++){
            int num = table[x + (rows * y)];
            cout << num << "\t";
        }
        cout << endl;
    }
}

