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
    int stack1[] = {0, 0, 25, 50, 75, 100},
        stack2[] = {0, 0, 0, 0, 0, 0},
        top1 = 4, top2 = 0, pushValue, maxSize = 6, stackBottom = maxSize - 1;

    while (true) {
        cout << "Insert Number: ";
        cin >> pushValue;

        if (top1 < maxSize) {
            // push every element to the left
            for (int i = 0; i < stackBottom; i ++) {
                stack1[i] = stack1[i+1];
            }

            // the new element goes to the right
            stack1[stackBottom] = pushValue;
            top1 ++;
        }

        if (top1 == maxSize) {
            cout << "\n\n-----Stack 1 is full, moving to backup stack...\n";

            while (top1 > 0 && top2 <= maxSize) {
                int popValue = stack1[top1-1];
                cout << "pop: " << popValue << endl;
                top1 --;
                stack1[top1] = 0;

                stack2[stackBottom - top2] = popValue;
                top2 ++;

                cout << "---------------------------\nMain List:";
                printList(stack1, maxSize);

                cout << "\nBackup List: ";
                printList(stack2, maxSize);
                cout << "\n---------------------------\n";
            }

        }

        cout << "---------------------------\nMain List:";
        printList(stack1, maxSize);

        cout << "\nBackup List: ";
        printList(stack2, maxSize);
        cout << "\n---------------------------\n";
    }

}

// queue
void finalPracSetB(){
    int queue1[5] = {0, 0, 0, 0, 0},
        queue2[5] = {0, 0, 0, 0, 0},
        enqueueValue, q1_front = 0, q1_rear = 0, q2_front = 0, q2_rear = 0;

    while (true){
        cout << "Insert a Number: ";
        cin >> enqueueValue;

        if (q1_rear < 5){
            // push elements to the right to free index 0
            for (int i = 4; i > q1_front; i --){
                queue1[i] = queue1[i-1];
            }

            // place the input element at the front
            queue1[q1_front] = enqueueValue;
            q1_rear ++;
        }

        cout << "---------------------------\nMain List:";
        printList(queue1, 5);

        cout << "\nBackup List: ";
        printList(queue2, 5);
        cout << "\n---------------------------\n";

        if (q1_rear >= 5) {
            cout << "Main queue is full, moving to backup queue now...\n";

            while (q1_rear > q1_front) {
                int dequeueValue = queue1[q1_rear - 1];
                queue1[q1_rear-1] = 0;
                q1_rear --;

                for (int i = q2_rear; i > q2_front; i --) {
                    queue2[i] = queue2[i-1];
                }

                queue2[q2_front] = dequeueValue;
                q2_rear ++;

                cout << "---------------------------\nMain List:";
                printList(queue1, 5);

                cout << "\nBackup List: ";
                printList(queue2, 5);
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
