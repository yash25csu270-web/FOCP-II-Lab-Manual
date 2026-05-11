#include<iostream>
using namespace std;
//Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
//expenses and apply a discount accordingly.
int main(){
    int items;
    cout << "Enter the no. of items: ";
    cin >> items;

    double cost;
    cout << "Enter cost of item: ";
    cin >> cost;

    double expenses = items * cost;
    double discount = 0;
    double amount;

    if(items > 1000){
        discount = 0.1 * expenses;   // 10% discount
        amount = expenses - discount;
    }
    else{
        amount = expenses;
    }
    cout << "\nTotal expenses = " << expenses << endl;
    cout << "Discount = " << discount << endl;
    cout << "Amount to be paid = " << amount << endl;
    return 0;
}
