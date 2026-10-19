#include <iostream>

void bubbleSort(int[], int);
int getThreeDigitNumber();
void print2dArray(int array[100][100], int, int);
int* convert_2D_to_1D_array(int array[100][100], int rows, int cols);

void setA();

using namespace std;

int main(){

    setA();
    return 0;
}

void setA(){
    int rows;
    int table[100][100];

    cout << "Insert number of rows: ";
    cin >> rows;

    for (int y = 0; y < rows; y ++){
        for (int x = 0; x < rows; x ++){
            cout << "Insert three-digit integer: ";
            int input = getThreeDigitNumber();
            table[y][x] = input;
        }
    }

    cout << "Printing 2d array" << endl;
    int 1Darray[] = convert_2D_to_1D_array(table,rows ,rows);

    print2dArray(table, rows, rows);
}

int* convert_2D_to_1D_array(int array[100][100], int rows, int cols){
    int array1D[1000];
    int *arrayPtr = array1D;

    int main_index = 0;
    for (int y = 0; y < rows; y ++){
        for(int x = 0; x < cols && main_index < (rows * cols); x ++){
            array1D[main_index] = array[y][x];
            main_index ++;
        }
    }

    return arrayPtr;
}

void print2dArray(int array[100][100], int rows, int cols ){
    for (int y = 0; y < rows; y ++){
        for (int x = 0; x < cols; x ++){
            cout << array[y][x] << "\t";
        }
        cout << endl;
    }
}

void bubbleSort(int arr[], int size){
    
    // iterate by using a moving starting index
    for (int startingIndex = 0; startingIndex < size-1; startingIndex ++){
        // start the index from zero, then ignore the last element (as it is assumed
        // to be already the greatest one)
        for (int currentIndex = 0; currentIndex < (size - 1 - startingIndex); currentIndex++){
            int currentElem = arr[currentIndex];
            int nextElement = arr[currentIndex + 1];

            // check if next element is smaller than current element
            if(currentElem > nextElement){
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
