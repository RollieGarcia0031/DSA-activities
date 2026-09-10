#include <iostream>

using namespace std;
int main (){

    int option;

    cout << "Enter option: ";
    cin >> option;

    switch (option) {
        // SET A
        case 1:                                                                                                                                                 {

            int binary, decimal;

            cout << "Enter a binary number: ";
            cin >> binary;

            decimal = 0;

            for (int binaryIndex = 1; binaryIndex <= 8; binaryIndex ++){

                int place_value = 1;
                int power_2 = 1;

                // multiply by 10 repeatedly to obtain the place value (ones, tens, hundreds)
                for (int i = 1; i < binaryIndex; i ++){
                    place_value *= 10;
                }

                // multiply by 2 repeaedly to obtain the decimal value (1, 2, 4, 8, 16...)
                for (int i = 1; i < binaryIndex; i ++){
                    power_2 *= 2;
                }

                // obtain the zero/one from the place value (bit)
                int bit = (binary / place_value) % 10;

                // obtain the 8 4 2 1 equivalent of bit
                int decimal_place = bit * power_2;
                decimal += decimal_place;

                cout << "binary digit: " << bit << " | "
                     << bit << " x 2^" << binaryIndex << " = " << decimal_place << " "
                     << endl;

            }

            cout << "Decimal value: " << decimal << endl;

            break;
                                                                                                                                                                                }

        // set B
        case 2:                                                                                                                                                     {
            int rows;

            cout << "Enter number of rows: ";
            cin >> rows;

            if (rows % 2 != 0) {
                cout << "Please use even number of rows only!" << endl;
            }

            else {
                for (int y = 0; y < rows; y++) {
                    for (int x = 0; x < rows; x++) {
                        // check if the coordinates is inside the triangle
                        if (y >= x && y >= rows - 1 - x) {
                            cout << "  ";
                        } // print @ symbol when the coords is outside the triangle
                        else {
                            cout << "@ ";
                        }
                    }

                    cout << endl;
                }
            }

            break;
                                                                                                                                                                    }

        case 3:                                                                                                                                                                     {

            int rows;
            cout<<"Enter the number of rows: ";
            cin>>rows;

            int region = rows/2;

            //Loop for the rows
            for (int row = 1; row<=rows; row++) {
                //Loop for the columns
                for (int column=1; column<=rows; column++) {
                    
                    bool at_north = row<= region;                     
                    bool at_west = column <= region;

                    if (at_north && at_west ) { //North Western Region
                        cout<<"* "; 
                    } else if (at_north && !at_west ) {  //North Eastern Region
                        cout<<"@ ";
                    } else if (!at_north && at_west ) { //South Western Region
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
        case 4:                                                                                                                                                                                              {
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
