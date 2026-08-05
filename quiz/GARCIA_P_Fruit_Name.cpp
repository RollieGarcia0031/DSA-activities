#include <iostream>

using namespace std;

int main(){

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
    return 0;
}
