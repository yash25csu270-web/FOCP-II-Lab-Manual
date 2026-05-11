#include<iostream>
using namespace std;
/*Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.
*/
#include<iostream>
using namespace std;

int main(){
    float side1, side2, side3;
    cout << "Enter side1: ";
    cin >> side1;
    cout << "Enter side2: ";
    cin >> side2;
    cout << "Enter side3: ";
    cin >> side3;
    if(side1 + side2 > side3 && 
       side2 + side3 > side1 && 
       side3 + side1 > side2) {
        if(side1 == side2 && side2 == side3){
            cout << "Equilateral Triangle" << endl;
        }
        else if(side1 == side2 || side2 == side3 || side3 == side1){
            cout << "Isosceles Triangle" << endl;
        }
        else {
            cout << "Scalene Triangle" << endl;
        }
    } else {
        cout << "Not a valid triangle" << endl;
    }

    return 0;
}
