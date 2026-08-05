#include <iostream>

using namespace std;

void set_2();
void set_3();
void set_1();

int main(){

    int set_int;

    cout << "Choose set: ";
    cin >> set_int;

    switch(set_int){
        // leap year
        case 1:
            int year, month;

            cout << "Enter year: ";
            cin >> year;

            cout << "Enter month: ";
            cin >> month;

            switch (month) {
                case 2:
                    if ((year % 400 != 0) && (year % 4 == 0 && year % 400 != 0) ) {
                    cout << "it has 29 days";
                    } else {
                        cout << "it has 28 days";
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

            for (int row = row_size; row > 0; row --){
                
                int left_margin = row_size - row;
                for (int i = 0; i < left_margin; i++){
                    cout << "  ";
                }

                for (int i = 0; i < row; i ++){
                    cout << "@   ";
                }

                cout << endl;
            }

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
            int seconds_input, additional_input;
            int additional_seconds = 60300;
            
            cout << "Enter the amount of seconds: ";
            cin >> seconds_input;
            additional_input = seconds_input;

            for (int i = 1; i <= 2; i ++){
                cout << (seconds_input / 86400) << " : ";
                seconds_input %= 86400;

                cout << (seconds_input / 3600) << " : ";
                seconds_input %= 3600;

                cout << (seconds_input / 60) << " : ";
                seconds_input %= 60;

                cout << (seconds_input) << endl;

                seconds_input = additional_input + additional_seconds;
            }
        break;
    }

    return 0;
}

/*
void set_1(){
    int year, month;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month: ";
    cin >> month;

    switch (month) {
        case 2:
            if ((year % 400 != 0) || (year % 4 == 0 && year % 400 != 0) ) {
               cout << "it has 29 days";
            } else {
                cout << "it has 28 days";
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
}

void set_2(){

    int row_size;
    cout << "Enter rows: ";
    cin >> row_size;

    for (int row = row_size; row > 0; row --){
        
        int left_margin = row_size - row;
        for (int i = 0; i < left_margin; i++){
            cout << "  ";
        }

        for (int i = 0; i < row; i ++){
            cout << "@   ";
        }

        cout << endl;
    }

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
}

void set_3(){
    cout << endl;

    int seconds_input, additional_input;
    int additional_seconds = 60300;

    cout << "Enter the amount of seconds: ";
    cin >> seconds_input;
    additional_input = seconds_input;

    for (int i = 1; i <= 2; i ++){
        cout << (seconds_input / 86400) << " : ";
        seconds_input %= 86400;

        cout << (seconds_input / 3600) << " : ";
        seconds_input %= 3600;

        cout << (seconds_input / 60) << " : ";
        seconds_input %= 60;

        cout << (seconds_input) << endl;

        seconds_input = additional_input + additional_seconds;
    }
}
*/