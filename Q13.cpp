#include<iostream>
using namespace std;
/*Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation.*/
float mysqrt(float n){
    float i;
    for(i = 0; i * i <= n; i += 0.001){
    }
    return i;
}

int main(){
    float a, b, c;
    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;
    float D = b*b - 4*a*c;   
    if(D > 0){
        float root1 = (-b + mysqrt(D)) / (2*a);
        float root2 = (-b - mysqrt(D)) / (2*a);

        cout << "Roots are real and different" << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if(D == 0){
        float root = -b / (2*a);
        cout << "Roots are equal" << endl;
        cout << "Root = " << root << endl;
    }
    else{
        cout << "Roots are imaginary (not real)" << endl;
    }

    return 0;
}
