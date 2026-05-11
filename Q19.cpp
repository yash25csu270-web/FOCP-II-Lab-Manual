#include<iostream>
using namespace std;
/*Q19. A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range.
*/
int main(){
    int start, end;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for(int num = start; num <= end; num++){

        if(num <= 1) continue;   // skip 0 and 1

        int count = 0;

        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                count++;
            }
        }

        if(count == 2){
            cout << num << " ";
        }
    }

    return 0;
}
