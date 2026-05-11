#include<iostream>
using namespace std;
/*Q15. A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/
int main(){
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    int num, max;
    cout << "Enter number 1: ";
    cin >> num;
    max = num;

    for(int i = 2; i <= n; i++){
        cout << "Enter number " << i << ": ";
        cin >> num;

        if(num > max){
            max = num;
        }
    }

    cout << "Largest number = " << max << endl;

    return 0;
}
