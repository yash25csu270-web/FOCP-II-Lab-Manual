#include<iostream>
using namespace std;
/*Q29. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.
*/
int main(){
    int temp[30];

    cout<<"Enter temperatures for 30 days:"<<endl;
    for(int i = 0; i < 30; i++){
        cin >> temp[i];
    }

    int min = temp[0];   // assume first is minimum

    for(int i = 1; i < 30; i++){
        if(temp[i] < min){
            min = temp[i];
        }
    }

    cout<<"Minimum temperature = "<<min<<endl;

    return 0;
}
