#include <iostream>

using namespace std;

// Prelim Terms
void activity_1();
void activity_2();
void activity_3();
void activity_4();
void practical_1();
void practical_2();
void exam_1 ();

// Midterms
void activity_5();

// Final Term
// -----------

void printLiner();

int main(){
    int termOption = 0,
        itemOption = 0;

    cout << "Which term would you pick?" << endl
         << " 1. Prelim" << endl
         << " 2. Midterm" << endl
         << " 3. Finals" << endl
         << " (Input Number Here): ";
    cin >> termOption;

    printLiner();

    switch (termOption){
        case 1:

            cout << "\n\nInsert Number Option:" << endl
                 << " 1. Activity 1"    << endl
                 << " 2. Activity 2"    << endl
                 << " 3. Activity 3"    << endl
                 << " 4. Activity 4"    << endl
                 << " 5. Practical Test 1" << endl
                 << " 6. Practical Test 2" << endl
                 << " 7. Exam 1" << endl
                 << " (Input Number): " 
            ;
            cin >> itemOption;

            break;
        case 2:
            cout << "\n\nInsert Number Option:" << endl
                 << " 7. Activity 5"    << endl
                 << " (Input Number): " 
            ;
            break;
        case 3:
            break;
        default:
            cout << "Invalid Input";
    }

    printLiner();

    switch (itemOption){
        case 1 :
            activity_1();
            break;
        case 2 :
            activity_2();
            break;
        case 3 :
            activity_3();
            break;
        case 4 :
            activity_4();
            break;
        case 5:
            practical_1();
            break;
        case 6:
            practical_2();
            break;
        case 7:
            exam_1();
            break;
        default:
            cout << "Invalid Option";
    }

    printLiner();
    return 0;
}

void activity_1(){

    int num1, num2;

    // insert user input
    cout << "Insert your first number: ";
    cin >> num1;
    
    cout << "Insert your second number: ";
    cin >> num2;

    // display outputs
    cout << endl;
    cout << "sum: ";
    cout << num1 << " + " << num2 << " = ";
    cout << num1 + num2;

    cout << endl;
    cout << "difference: ";
    cout << num1 << " - " << num2 << " = ";
    cout << num1 - num2;

    cout << endl;
    cout << "product: ";
    cout << num1 << " * " << num2 << " = ";
    cout << num1 * num2;

    cout << endl;
    cout << "quotient: ";
    cout << num1 << " / " << num2 << " = ";
    cout << num1 / num2;

    cout << endl << endl;
}

void activity_2(){

    // declare each row of table as a string
    string row1 = "1\t2\t3\t4\t5\t6\t7\t8\t9\t10";
    string row2 = "2\t4\t6\t8\t10\t12\t14\t16\t18\t20";
    string row3 = "3\t6\t9\t12\t15\t18\t21\t24\t27\t30";
    string row4 = "4\t8\t12\t16\t20\t24\t28\t32\t36\t40";
    string row5 = "5\t10\t15\t20\t25\t30\t35\t40\t45\t50";
    string row6 = "6\t12\t18\t24\t30\t36\t42\t48\t54\t60";
    string row7 = "7\t14\t21\t28\t35\t42\t49\t56\t63\t70";
    string row8 = "8\t16\t24\t32\t40\t48\t56\t64\t72\t80";
    string row9 = "9\t18\t27\t36\t45\t54\t63\t72\t81\t90";
    string row10 = "10\t20\t30\t40\t50\t60\t70\t80\t90\t100";

    // output each row individually
    cout << row1 << endl;
    cout << row2 << endl;
    cout << row3 << endl;
    cout << row4 << endl;
    cout << row5 << endl;
    cout << row6 << endl;
    cout << row7 << endl;
    cout << row8 << endl;
    cout << row9 << endl;
    cout << row10 << endl;

}

void activity_3(){
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
}

void assignPi(double *pi, const double value);
void evaluate_circle(double radius, double pi, double &circumference, double &area);
void evaluate_ellipse(double radius, double pi, double &circumference, double &area);
void activity_4(){

    // declare the value of PI
    double PI;
    assignPi(&PI, 3.1415);

    // take user input, radius
    double radius;
    
    cout << "----------\nEnter radius: ";
    cin >> radius;

    double circleCircumference, circleArea;
    double ellipseCircumference, ellipseArea;

    // calculate circumference of circle and ellipse
    // pass the address of area and circumference, manipulate, then display the values
    evaluate_circle(radius, PI, circleCircumference, circleArea);
    evaluate_ellipse(radius, PI, ellipseCircumference, ellipseArea);

    cout << "\n\n---------\nCIRCLE\n---------\n";
    cout << "Circumference: " << circleCircumference << endl;
    cout << "Area: " << circleArea << endl;

    cout << "\n\n---------\nEllipse\n---------\n";
    cout << "Circumference: " << ellipseCircumference << endl;
    cout << "Area: " << ellipseArea << endl;
}

void practical_1(){

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
}

double getSum(double num1, double num2, double ref1, double ref2);
double getAverage(double num1, double num2, double ref1, double ref2);
double getProduct(double num1, double num2, double ref1, double ref2);

void practical_2(){

    // choose option 1 or 2
    int option;
    cout << "Choose option (1,2): " << endl
         << " 1. Set A" << endl
         << " 2. Set B" << endl
    ;

    cin >> option;

    cout << endl;

    switch (option){

        // SET A problem:
        case 1 :                                                                                {

            // declare input and their pointers
            double input1, input2;
            double *ptrInput1 = &input1;
            double *ptrInput2 = &input2;

            // take user input number
            cout << "Insert value of Num-1: ";
            cin >> input1;

            cout << "Insert value of Num-2: ";
            cin >> input2;

            // use pointer to modify the value
            *ptrInput1 = 20;
            *ptrInput2 += 50;

            // display address and values of both pointers and variables
            cout << endl
                 << "-------------------------------------------------" << endl
                 << " Variable\t| Address\t| Value" << endl
                 << "-------------------------------------------------" << endl
                 << " input1\t\t| "  << &input1    << "| " << input1    << endl
                 << " input2\t\t| "  << &input2    << "| " << input2    << endl
                 << " ptrInput1\t| " << &ptrInput1 << "| " << ptrInput1 << endl
                 << " ptrInput2\t| " << &ptrInput2 << "| " << ptrInput2 << endl

                 << endl;
            break;
                                                                                                                           }

        // SET B problem:
        case 2: {

            // declare inputs and their reference
            double input1, input2;
            double &refInput1 = input1;
            double &refInput2 = input2;

            // take user input
            cout << "Enter First number: " << "";
            cin >> input1;

            cout << "Enter second number: ";
            cin >> input2;

            // calculate sum, average, products
            double sum, average, product;

            sum = getSum(input1, input2, refInput1, refInput2);
            average = getAverage(input1, input2, refInput1, refInput2);
            product = getProduct(input1, refInput2, refInput1, refInput2);

            // display results
            cout << endl 
                 << "------------------------"  << endl
                 << " Variables\t| Values"      << endl
                 << "------------------------"  << endl 
                 << " num1\t\t| "  << input1    << endl
                 << " num2\t\t| "  << input2    << endl
                 << " ref1\t\t| "  << refInput1 << endl
                 << " ref2\t\t| "  << refInput2 << endl
                 << " sum\t\t| "   << sum       << endl
                 << " average\t| " << average   << endl
                 << " product\t| " << product   << endl
                 << endl;

            break;
        }

    }
}

void exam_1 (){

    int option;

    cout << "Enter option: " << endl 
         << " 1. Set A" << endl
         << " 2. Set B" << endl
         << " 3. Set C" << endl
         << " 4. Set D" << endl
         << " Input Number (1-4): " 
         ;
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
}

int getThreeDigitNumber();

void activity_5(){

    // declare the 4x4 table
    int rows = 4;
    int cols = 4;
    int table[4][4];

    // input 3 digit number on each cell of table
    cout << endl << endl << " ------------- Enter a three digit number ------------- " << endl;
    for (int row = 0; row < rows; row++){

        for (int col = 0; col < cols; col++){

            cout << "Row " << row+1 << ", Column " << col+1 << " : ";

            int inputNumber = getThreeDigitNumber();
            table[row][col] = inputNumber;
        }
    }

    // assume the first element as the max
    int max = table[0][0];

    // compare each element and print to find the max
    cout << endl << endl << " ------------- Table ------------- " << endl;
    cout << " ________________________________" << endl;

    for (int row = 0; row < rows; row++){

        for(int col = 0; col < cols; col ++){
            cout << " | " << table[row][col] << "\t";

            int currentElement = table[row][col];

            if(max < currentElement){
                max = currentElement;
            }
        }
        cout << "| " << endl;
    }

    // print the max number
    cout << endl << "Max number: " << max << endl;
}

// runs a loop that only stop when a 3 digit number
// is entered by the user
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

// returns sum of 4 numbers
double getSum(double num1, double num2, double ref1, double ref2){
    return num1 + num2 + ref1 + ref2;
}

// returns average of 4 numbers
double getAverage(double num1, double num2, double ref1, double ref2){
    return (num1 + num2 + ref1 + ref2) / 4;
}

// returns product of 4 numbers
double getProduct(double num1, double num2, double ref1, double ref2){
    return num1 * num2 * ref1 * ref2;
}
// assign the desired value of PI
void assignPi(double *pi, const double value ){
    *pi = value;
}

// calculate the area and circumference of circle
void evaluate_circle(double radius, double pi, double &circumference, double &area){
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
}

// calculate the circumference and area of ellipse
void evaluate_ellipse(double radius, double pi, double &circumference, double &area){
    double A = radius;
    double B = radius * 2;

    area = pi * A * B;

    // use approximation formula
    double eccentricFactor = (A - B) / (A + B);
    circumference = pi * (A + B) * (1 + (eccentricFactor * eccentricFactor) / 4);
}

void printLiner(){
    cout << "\n------------------------------\n";
}
