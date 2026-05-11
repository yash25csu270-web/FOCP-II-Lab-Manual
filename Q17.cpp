#include<iostream>
using namespace std;
/*Q17. A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number.*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        cout << "It is a Perfect number" << endl;
    }
    else{
        cout << "It is NOT a Perfect number" << endl;
    }

    int temp = num, rem, result = 0;

    while(temp != 0){
        rem = temp % 10;
        result += rem * rem * rem;  
        temp = temp / 10;
    }

    if(result == num){
        cout << "It is an Armstrong number" << endl;
    }
    else{
        cout << "It is NOT an Armstrong number" << endl;
    }

    return 0;
}
