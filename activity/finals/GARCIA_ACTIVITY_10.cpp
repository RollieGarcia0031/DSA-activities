#include <iostream>

using namespace std;

bool isValidCurrency(float bill);

int main(){
    string item_names[] = {
        "IC 74HC164",
        "IC 74LS00",
        "IC 74LS04",
        "IC 74LS08",
        "IC Schmitt Inv"
    };

    float prices[] = {
        10.50,
        5.00,
        40.00,
        25.50,
        20.00
    };

    int quantities[] = {5, 10, 3, 1, 8};
    int itemCount = 5;

    while (true) {
        // display menu with valid quantity
        cout << "\n-----------------------Available Items-----------------------\n";
        cout << "Name\t\tQty\tPrice\n\n";
        for (int i = 0; i < itemCount; i ++){
            if (quantities[i] > 0)
                cout << item_names[i] << "\t" << quantities[i] << "\t" << prices[i] << endl;
        }

        // insert bill from user
        int payment;
        cout << "  => Insert amount of bill (PHP): ";
        cin >> payment;

        // check if bill is valid amount
        if (!isValidCurrency(payment)){
            cout << "\n\n\n-----------------------invalid amount of bill (PHP): " << payment << endl;
            continue;
        }
        // display affordable item
        cout << "\n-----------------------Choose An Item-----------------------\n";

        cout << "\nID\tName\t\t\tPrice\n";
        for (int i = 0; i < itemCount; i ++){
            float item_price = prices[i];
            if (payment >= item_price && quantities[i] > 0){
                cout << i+1 << ".\t" << item_names[i] << "\t" << prices[i] << endl;
            }
        }

        // take user selection
        int selectedID;
        cout << "\n  => Insert Item ID: ";
        cin >> selectedID;

        if (selectedID > itemCount){
            cout << "\n\nInvalid item ID! : " << selectedID << endl;
            continue;
        }

        // display sucessful transaction

        // decerement ID to match index
        selectedID --;

        // decrement item count
        quantities[selectedID] --;

        // calculate change
        float change = payment - prices[selectedID];
        cout << "\nTransaction Successful!" << endl
             << "Item:\t" << item_names[selectedID] << endl
             << "Price:\t" << prices[selectedID] << endl
             << "Paid:\t" << payment << endl
             << "Change:\t" << change << endl;

        // ask for continuation
        char userInput;
        cout << "\ncontiune? (y/n): ";
        cin >> userInput;
        if (userInput == 'n')
            return 0;
     
    }

    return 0;
}

bool isValidCurrency(float bill){
    return
        bill == 1   || bill == 5   || bill == 10  ||
        bill == 20  || bill == 50  || bill == 100 ||
        bill == 200 || bill == 500 || bill == 1000;
}
