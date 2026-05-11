#include<iostream>
using namespace std;
/*Q28. A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.*/
int main (){
    int arr[5] = {1,2,3,4,5};
    int sumEven = 0;
    int sumOdd = 0; 

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";   // better output formatting
    
        if(arr[i] % 2 == 0){
            sumEven = sumEven + arr[i];
        }
        else{
            sumOdd = sumOdd + arr[i];
        }
    }

    cout << endl;
    cout << "Sum of even numbers = " << sumEven << endl;
    cout << "Sum of odd numbers = " << sumOdd << endl;

    return 0;
}
