#include <iostream>

using namespace std;

void bubbleSort(int [], int);
void selectionSort(int [], int);
void insertionSort(int [], int);

int main(){
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    // input the contents of the array
    for (int i = 0; i < size; i ++){
        cout << "enter element at index " << i << ": ";
        cin >> arr[i];
    }
    int option;

    // take user input
    cout << "Pick a sorting algorithm: " << endl
         << "1. Selection sort" << endl
         << "2. Bubble sort" << endl
         << "3. Insertion sort" << endl
         << "Insert number: ";
    cin >> option;

    // print the contents of the array
    cout << endl << "- - - - - Unsorted Array - - - - - " << endl;
    for (int i = 0; i < size; i ++){
        cout << arr[i];
        if (i < size-1)
            cout << ", ";

    }
    cout << endl;

    // apply the sorting algorithm based on the user's option
    switch (option){
        case 2:
            bubbleSort(arr, size);
            break;
        case 1:
            selectionSort(arr, size);
            break;
        case 3:
            insertionSort(arr, size);
            break;

        default:
            cout << "invalid input option";
    }

    // print the contents of the array
    cout << endl << "- - - - - Sorted Array - - - - - " << endl;
    for (int i = 0; i < size; i ++){
        cout << arr[i];
        if (i < size-1)
            cout << ", ";

    }
    cout << endl;

    return 0;
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

void selectionSort(int arr[], int size){
    int minIndex;

    // iterate from start to end of array
    for (int i = 0; i < size; i ++){
        // find the minimum number
        // (assume the initial value)
        int min = arr[i];
        int minCounter = 0;

        // iterate from next index, upto end of array
        for (int j = i+1; j < size; j ++){
            int element = arr[j];

            // change the minIndex if a smaller number is found
            if(min > element){
                min = arr[j];
                minIndex = j;
                minCounter ++;
            }
        }

        // check if the smaller number is found
        if (minCounter != 0){
            // swap the current element to smallest element
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

    }
}

void insertionSort(int arr[], int size){

    // iterate from start to finish of array
    for (int i = 1; i < size; i ++){

        int currentElement = arr[i];
        int targetIndex = i;

        // iterate from start of array upto te current target
        for(int j = 0; j < i; j++){

            // change the target index if a smaller element to 
            // the left was found
            if(currentElement < arr[j]){
                targetIndex = j;
                break;
            }
        }

        // shift the elements to the right
        for(int k = i; k > targetIndex; k--){
            arr[k] = arr[k-1];
        }

        // place the target element to it's appropriate position
        arr[targetIndex] = currentElement;
    }
}
