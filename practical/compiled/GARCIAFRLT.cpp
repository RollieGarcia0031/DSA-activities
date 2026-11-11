#include <iostream>

using namespace std;

void printList(int list[5], int size);
void finalPracSetA();
void finalPracSetB();

int main(){
    int option, numberInput;

    cout << "1. SET A" << endl
         << "2. SET B" << endl
         << "Insert option: ";
    cin >> option;

    switch (option){
        case 1:
            finalPracSetA();
            break;
        case 2:
            finalPracSetB();
            break;
    }

    return 0;
}

// stack
void finalPracSetA(){
    int s1[] = {0, 0, 25, 50, 75, 100},
        s2[] = {0, 0, 0, 0, 0, 0},
        size1 = 4, size2 = 0, inputNum, max = 6;

    while (true) {
        cout << "Insert Number: ";
        cin >> inputNum;

        if (size1 < max) {
            s1[max - size1 - 1] = inputNum;
            size1 ++;
        }

        if (size1 == max) {
            cout << "\n\n-----Stack 1 is full, moving to backup stack...\n";

            while (size1 > 0 && size2 <= max) {
                int pop = s1[size1-1];
                cout << "pop: " << pop << endl;
                size1 --;
                s1[size1] = 0;

                s2[max - size2 - 1] = pop;
                size2 ++;

                cout << "---------------------------\nMain List:";
                printList(s1, max);

                cout << "\nBackup List: ";
                printList(s2, max);
                cout << "\n---------------------------\n";
            }

        }

        cout << "---------------------------\nMain List:";
        printList(s1, max);

        cout << "\nBackup List: ";
        printList(s2, max);
        cout << "\n---------------------------\n";
    }

}

// queue
void finalPracSetB(){
    int q1[5] = {0, 0, 0, 0, 0},
        q2[5] = {0, 0, 0, 0, 0},
        inputNum, size1 = 0, size2 = 0;

    while (true){
        cout << "Insert a Number: ";
        cin >> inputNum;

        if (size1 < 5){
            // push elements to the right to free index 0
            for (int i = 4; i > 0; i --){
                q1[i] = q1[i-1];
            }

            // place the input element at the front
            q1[0] = inputNum;
            size1 ++;
        }

        cout << "---------------------------\nMain List:";
        printList(q1, 5);

        cout << "\nBackup List: ";
        printList(q2, 5);
        cout << "\n---------------------------\n";

        if (size1 >= 5) {
            cout << "Main queue is full, moving to backup queue now...\n";

            while (size1 > 0) {
                int dequeue1 = q1[size1 - 1];
                q1[size1-1] = 0;
                size1 --;

                for (int i = size2; i > 0; i --) {
                    q2[i] = q2[i-1];
                }

                q2[0] = dequeue1;
                size2 ++;

                cout << "---------------------------\nMain List:";
                printList(q1, 5);

                cout << "\nBackup List: ";
                printList(q2, 5);
                cout << "\n---------------------------\n";

            }
        }
    }
}

void printList(int list[5], int size){
    cout << "[ ";
    for (int i = 0; i < size; i ++){
        cout << list[i] << "\t";
    }
    cout << "]";
}
