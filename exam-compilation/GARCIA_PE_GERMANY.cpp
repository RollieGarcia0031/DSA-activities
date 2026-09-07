#include <iostream>

using namespace std;
int main (){

    int option;

    cout << "Enter option: ";
    cin >> option;

    switch (option) {
        // SET A
        case 1: {

            int binary;

            cout << "Enter a binary number: ";
            cin >> binary;

            int temp = binary;
            int decimal = 0;
            int power = 0;

            while (temp != 0) {
                int digit = temp % 10;   // get last digit (0 or 1)
                int value = 1;

                for (int i = 0; i < power; i++) {   // manual 2^power (no cmath)
                    value *= 2;
                }
                value *= digit;

                decimal += value;

                cout << "Digit: " << digit
                     << "  x  2^" << power
                     << "  =  " << value
                     << "   (Running total: " << decimal << ")\n";

                temp /= 10;
                power++;
            }

            cout << "Binary number  : " << binary << endl;
            cout << "Decimal number : " << decimal << endl;
         
           break;
        }

        // set B
        case 2: {
            int rows;

            cout << "Enter number of rows: ";
            cin >> rows;

            if (rows % 2 != 0) {
                cout << "Please use even number of rows only!" << endl;
            }
            else {
                for (int y = 0; y < rows; y++) {
                    for (int x = 0; x < rows; x++) {
                        if (y >= x && y >= rows - 1 - x) {
                            cout << " ";
                        }
                        else {
                            cout << "@";
                        }
                    }

                    cout << endl;
                }
            }

            break;
        }

        case 3: {

            int rows;
            cout<<"Enter the number of rows: ";
            cin>>rows;

            rows= rows*2;
            int region = rows/2;

            //Loop for the rows
            for (int row = 1; row<=rows; row++) {
                //Loop for the columns
                for (int column=1; column<=rows; column++) {
                    
                    
                    if (row <= region && column <= region ) { //North Western Region
                        cout<<"* "; 
                    } else if (row <= region && column > region ) {  //North Eastern Region
                        cout<<"@ ";
                    } else if (row > region && column <= region ) { //South Western Region
                        cout<<"@ "; 
                    } else { //South Eastern Region
                        cout<<"  "; 
                    }
                }	

                cout<<endl;
            }
            break;
        }

        // set D
        case 4: {
            int length, width, additional_factor, displayed_number;

            displayed_number = 1;
            additional_factor = 1;

            cout << "Input length: ";
            cin >> length;

            cout << "Input width: ";
            cin >> width;

            if (length < width) {
                cout << "invalid length width ratio!" << endl;
            } else {
                for (int y = 0; y < width; y++){
                    for (int x = 0; x < length; x ++){
                        cout << displayed_number << "\t";
                        displayed_number += additional_factor;
                        additional_factor += 1;
                    }
                    cout << endl;
                }
            }

            break;
        }
    }

    return 0;
}
