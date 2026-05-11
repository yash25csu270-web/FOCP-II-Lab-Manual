#include<iostream>
#include<string>
using namespace std;
/*Q25. A security system generates list of prime keys within given range. Implement a solution to display all
prime numbers between two limits.
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.
*/
int main(){
    int choice;

    cout<<"1. Find Prime Numbers in Range"<<endl;
    cout<<"2. Check Password Strength"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 1){
        int start, end;
        cout<<"Enter start and end: ";
        cin>>start>>end;

        cout<<"Prime numbers are: ";
        for(int i = start; i <= end; i++){
            if(i <= 1) continue;

            bool isPrime = true;

            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }

            if(isPrime){
                cout << i << " ";
            }
        }
    }
    else if(choice == 2){
        string password;
        cout<<"Enter password: ";
        cin>>password;

        bool hasUpper = false;
        bool hasLower = false;
        bool hasDigit = false;
        bool hasSpecial = false;

        for(int i = 0; i < password.length(); i++){
            char ch = password[i];

            if(ch >= 'A' && ch <= 'Z'){
                hasUpper = true;
            }
            else if(ch >= 'a' && ch <= 'z'){
                hasLower = true;
            }
            else if(ch >= '0' && ch <= '9'){
                hasDigit = true;
            }
            else if(ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='!' || ch=='&' || ch=='*'){
                hasSpecial = true;
            }
        }

        if(hasUpper && hasLower && hasDigit && hasSpecial){
            cout<<"Password is Strong"<<endl;
        }
        else{
            cout<<"Password is Weak"<<endl;
        }
    }

    else{
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}
