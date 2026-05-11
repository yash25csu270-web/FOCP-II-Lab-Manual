#include<iostream>
using namespace std;
/*Q16. A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a
number and check whether it is prime. */
int main(){
    int N;
    cout << "Enter the number: ";
    cin >> N;

    if(N <= 1){
        cout << "Not a prime number" << endl;
    }
    else{
        int count = 0;

        for(int i = 1; i <= N; i++){
            if(N % i == 0){
                count++;
            }
        }

        if(count == 2){
            cout << "It is a prime number" << endl;
        }
        else{
            cout << "Not a prime number" << endl;
        }
    }

    return 0;
}
