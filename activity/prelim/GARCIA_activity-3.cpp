// include headers
#include <iostream>

// use namespace
using namespace std;

// declare main function
int main(){
    // assign target value and squared value
    unsigned int target;

    cout << "put a number: ";
    cin >> target;
    int square = target * target;

    for (int i = square; i >= 1; i --){
        //print the current number
        cout << i;

        // print extra space if number has more than 1 digit 
        // then, use spaces instead of tabs to make it look
        // compact in terminal
        if (i > 10) {
            cout << " ";
        } else {
            // print less space for single digit number;
            cout << "  ";
        }

        // check if the current number needs to enter
        // a new line
        int next_number = i - 1;
        bool reached_edge = next_number % target == 0;
        if (reached_edge) {
            cout << endl;
        }
    }
    return 0;
}
