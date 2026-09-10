#include <iostream>

using namespace std;

int main(){

    int set_int;

    cout << "Choose set (1-3): ";
    cin >> set_int;

    switch(set_int){

        // leap year
        case 1:
            // declare and get user input
            int year, month;

            cout << "Enter year: ";
            cin >> year;

            cout << "Enter month(1-12): ";
            cin >> month;

            // check different month cases
            switch (month) {
                case 2:
                    if ((year % 400 != 0) && (year % 4 == 0 && year % 400 != 0) ) {
                    cout << "this month has 29 days" << endl;
                    } else {
                        cout << "this month has 28 days" << endl;
                    }
                break;

                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    cout << "this month has 31 days " << endl;
                break;

                case 4:
                case 6:
                case 9:
                case 11:
                    cout << "this has 30 days" << endl;
                break;

                default:
                    cout << "invalid month";
            }
        break;

        // hour glass
        case 2:

            int row_size;
            cout << "Enter rows: ";
            cin >> row_size;

            // print upper half
            for (int row = row_size; row > 0; row --){
                // calculate left margin
                int left_margin = row_size - row;
                for (int i = 0; i < left_margin; i++){
                    cout << "  ";
                }

                // print needed chars
                for (int i = 0; i < row; i ++){
                    cout << "@   ";
                }

                cout << endl;
            }

            // print lower half
            for(int row = 2; row <= row_size; row ++){
                int left_margin = row_size - row;

                for (int i = 0; i < left_margin; i++){
                    cout << "  ";
                }

                for (int i = 0; i < row; i ++){
                    cout << "@   ";
                }

                cout << endl;
            }
                
        break;

        // days parser

        case 3:
            // get user inputs
            int seconds_input;

            // convert 16:45:00 to seconds
            int additional_seconds = 60300;
            
            cout << "Enter the amount of seconds: ";
            cin >> seconds_input;
            int additional_input = seconds_input + additional_seconds;

            // use loop to print original and added time
            for (int i = 1; i <= 2; i ++){
                // print days
                cout << (seconds_input / 86400) << " : ";
                seconds_input %= 86400;

                // print hours
                cout << (seconds_input / 3600) << " : ";
                seconds_input %= 3600;

                // print minuts
                cout << (seconds_input / 60) << " : ";
                seconds_input %= 60;

                // print seconds
                cout << (seconds_input) << endl;

                seconds_input = additional_input;
            }
        break;
    }

    return 0;
}
