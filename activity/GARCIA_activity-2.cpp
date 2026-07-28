// include input & output stream, and string header
#include <iostream>
#include <string>

using namespace std;
int main(){

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

    // return zero to end the program
    return 0;
}
