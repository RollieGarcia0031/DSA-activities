#include <iostream>

using namespace std;

// Prelim Terms
void activity_1(); //  1.
void activity_2(); //  2.
void activity_3(); //  3.
void activity_4(); //  4.
void practical_1(); // 5.
void practical_2(); // 6.
void exam_1 ();     // 7.

// Midterms
void activity_5(); // 8.
void activity_6(); // 9.
void activity_7(); // 10.
void practical_3(); // 11.

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
                 << " 8. Activity 5"    << endl
                 << " 9. Activity 6"    << endl
                 << " 10. Activity 7"    << endl
                 << " 11. Practical 3"    << endl
                 << " (Input Number): " 
            ;

            cin >> itemOption;
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
        case 8:
            activity_5();
            break;
        case 9:
            activity_6();
            break;
        case 10:
            activity_7();
            break;
        case 11:
            practical_3();
            break;
        default:
            cout << "Invalid Option";
    }

    printLiner();
    return 0;
}

/**
 * Basics of cout and cin
 */
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

void activity_6(){
    // declare the table and its size
    int maxRows = 4;
    int maxCols = 4;
    
    int targetNumber;

    int table[4][4] = {
        {123,124,125,126},
        {234,235,236,237},
        {342,343,346,349},
        {451,459,460,470},
    };

    // print the table's contents
    cout << endl << endl << "- - - - - - TABLE- - - - - -" << endl;
    for (int rowIndex = 0; rowIndex < maxRows; rowIndex ++){
        cout << " ";
        for (int colIndex = 0; colIndex < maxCols; colIndex ++){
            cout << table[rowIndex][colIndex] << "\t";
        }
        cout << endl;
    }

    // ask for user input (target number)
    cout << endl << "Enter the target number: ";
    cin >> targetNumber;

    // start the search
    int mid_col_index;
    bool numberIsFound = false;

    // declare the middle index of array
    if(maxCols % 2 == 0){
        mid_col_index = (maxCols / 2) - 1;
    } else {
        mid_col_index = maxCols / 2;
    }

    // run a loop to go through each rows
    for (int rowIndex = 0; rowIndex < maxRows; rowIndex ++){
        int midValue = table[rowIndex][mid_col_index];

        // check if the middle value on each row matches the target number
        if (midValue == targetNumber){
            cout << "Found at : Row " << rowIndex+1 << ", Column " << mid_col_index+1;
            numberIsFound = true;
        } else if (targetNumber > midValue) {

            // search on the right side of columns of target value is greater than the middle value
            for (int colIndex = mid_col_index; colIndex < maxCols; colIndex ++){
                if (table[rowIndex][colIndex] == targetNumber){
                    cout << "Found at : Row " << rowIndex+1 << ", Column " << colIndex+1;
                    numberIsFound = true;
                    break;
                }
            }
        } else {

            // search on the left side of column if target value is less than the middle value;
            for (int colIndex = mid_col_index; colIndex >= 0; colIndex --){
                if (table[rowIndex][colIndex] == targetNumber){
                    cout << "Found at : Row " << rowIndex+1 << ", Column " << colIndex+1;
                    numberIsFound = true;
                    break;
                }
            }
        }
    }
    cout << endl << endl;

    if (!numberIsFound){
        cout << "Number not found!" << endl;
    }
}

void bubbleSort(int [], int);
void selectionSort(int [], int);
void insertionSort(int [], int);
void activity_7(){
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];

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
}

int getNumber();
char getCharEquivalent(int);
void print2DCharArray(char table[50][50], int, int);
void print2DIntArray(int table[50][50], int , int);
int setA();
int setB();
void practical_3(){
    // take user input for problem set

    int input_option;
    cout << "Insert option for problem set: (1,2) ";
    cin >> input_option;

    cout << endl << endl;
    switch(input_option){
        case 1:
            setA();
            break;
        case 2:
            setB();
            break;
        default:
            cout << " Invalid Option! " << endl << endl;
    }
}

int setA(){
    cout << " - - - - - - SET A - - - - - - " << endl;

    int rows, cols;
    int int_table[50][50];
    char char_table[50][50];

    // get the row input
    cout << endl <<  "Insert the number of rows: ";
    cin >> rows;
    cols = rows;

    // insert value to each element of array
    for (int y = 0; y < rows; y++){
        for (int x = 0; x < cols; x++){
            cout << "Insert a number between 1-26:";
            int input = getNumber();
            int_table[y][x] = input;
            char_table[y][x] = getCharEquivalent(input);
        }
    }

    // print the number and letter array:
    cout << endl << "Number Array" << endl;
    print2DIntArray(int_table, rows, cols);

    cout << "Letter Array" << endl;
    print2DCharArray(char_table, rows, cols);

    // ask user for target character:
    char targetChar;
    cout << endl << "Insert the character to be searched in table: ";
    cin >> targetChar;

    // find the target character using linear search
    int found_index_row = 0;
    int found_index_col = 0;
    bool element_found = false;
    for (int y = 0; y < rows; y++){
        for (int x = 0; x < cols; x++){
            char element = char_table[y][x];
            if (element == targetChar){
                found_index_row = y;
                found_index_col = x;
                element_found = true;
            }
        }
    }

    if (element_found){
        cout << "Found at index: (" << found_index_row << ", " << found_index_col << ")" << endl;
    } else {
        cout << "Element '" << targetChar << "' not found!" << endl;
    }

    return 0;
}

int setB(){
    cout << " - - - - - - SET B - - - - - - " << endl;

    // initialize 2D array with limit of 50x50
    int rows, cols, num_input;
    int int_table[50][50];
    char char_table[50][50];

    cout << endl << "----Enter array dimensions----" << endl;
    // get input values for rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    cout << endl << "Enter array values" << endl;
    // get input value for the upper half of 2D array
    for (int y = 0; y < rows/2; y ++){
        for(int x = 0; x < cols; x ++){
            cout << "Enter number (1-26)(Row " << y+1 << ", Column " << x+1 << "): ";
            num_input = getNumber();
            int_table[y][x] = num_input;

            int mirrored_y = (rows/2)-y-1;
            char_table[mirrored_y][x] = getCharEquivalent(num_input);
        }
    }

    // find the index of the smallest number in the 2D array
    // using linear search
    int min_row_index = 0;
    int min_col_index = 0;

    for (int y = 0; y < rows/2; y ++){
        for(int x = 0; x < cols; x ++){
            int smallest = int_table[min_row_index][min_col_index];
            int currentElement = int_table[y][x];
            if(smallest > currentElement){
                min_row_index = y;
                min_col_index = x;
            }
        }
    }

    // print the table containing letters and number
    cout << endl << "Array Values" << endl;
    print2DIntArray(int_table, rows/2, cols);
    cout << "---------------------" << endl; 
    print2DCharArray(char_table, rows/2, cols);


    // display the smallest number found in the 2D array
    int smallestNumber = int_table[min_row_index][min_col_index];
    cout << endl << "Smallest: " << smallestNumber << endl;
    cout << "Found at index: [" << min_row_index << "]" << "[" << min_col_index << "]" << endl;
    cout << "Equivalent alphabet character: " << getCharEquivalent(smallestNumber) << endl;
    return 0;
}

void print2DIntArray(int table[50][50], int rows, int cols){
    // print the array containing letters 
    for (int y = 0; y < rows; y ++){
        cout << " ";
        for(int x = 0; x < cols; x ++){
            cout << table[y][x] << ",\t";
        }
        cout << endl;
    }
}

void print2DCharArray(char table[50][50], int rows, int cols){

    // print the array containing letters 
    for (int y = 0; y < rows; y ++){
        cout << " ";
        for(int x = 0; x < cols; x ++){
            cout << table[y][x] << ",\t";
        }
        cout << endl;
    }
}


// get input number ranging from 1-26 only
int getNumber(){
    int input;

    bool running = true;
    while(running){
        cin >> input;
        
        if(input <= 26 && input > 0){
            return input;
            running = false;
        } else {
            cout << "Only numbers 1-26 is allowed!";
        }
    }

    return 0;
}

// retrieve a char based on a given number
// it returns capital letters a-z for 1-26
char getCharEquivalent(int num){
    char letters[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
        't', 'u', 'v', 'w', 'x', 'y', 'z'
    };

    if(num <= 26 && num > 0)
        return letters[num-1];

    return ' ';
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
