#include <iostream>

using namespace std;

int getThreeDigitNumber();
void printList(int arr[5],const int size, string title);
bool enqueue(int arr[5], int max_size, int value, int &size);
void dequeueAll(int arr1[5], int arr2[5], int &size1, int &size2);

int main(){
    int arr1[5] = {},
        arr2[5] = {},
        input,
        size1 = 0,
        size2 = 0,
        max_size = 5;
    bool success;

    while (true){
        // output the current values of array elements
        cout << "\n ---------- Current Lists: ---------- ";
        printList(arr1, size1, "Array 1");
        printList(arr2, size2, "Array 2");

        // take user input
        cout << "\nInsert a 3-digit number:";
        input = getThreeDigitNumber();

        // try to enqueue to the arr1 first
        success = enqueue(arr1, max_size, input, size1);

        if (!success && size2 != max_size){
            // if enqueque to arr1 fails,
            // dequeue all elements of arr1 to arr2 if 
            // arr2 is still available
            
            cout << "\nMoving elements of arr1 to arr2...\n";

            dequeueAll(arr1, arr2, size1, size2);
            enqueue(arr1, max_size, input, size1);
        } else if (!success && size2 == max_size){
            // if both array is full, output an
            // error message instead
            cout << "Both array is full!";
        }
    }

    return 0;
}

bool enqueue(int arr[5], int max_size, int value, int &size){
   if (size == max_size){
        cout << "Array is full!";
        return false;
   }

   arr[size] = value;
   size ++;
   return true;
}

// move all elements from array to another
void dequeueAll(int arr1[5], int arr2[5], int &size1, int &size2){
    for (int i = 0; i < size1; i ++){
        arr2[i] = arr1[i];
    }

    size2 = size1;
    size1 = 0;
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

void printList(int arr[5],const int size, string title){
    cout << "\n " << title << ":\n[ ";

    if (size == 0) {
        cout << "empty ]" << endl;
        return;
    }

    for (int i = 0; i < size-1; i ++){
        cout << arr[i] << "\t";
    }
    cout << arr[size-1] << " ]\n";
}
