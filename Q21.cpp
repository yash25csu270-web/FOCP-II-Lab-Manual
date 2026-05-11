#include<iostream>
using namespace std;
/*Q21. A CAD tool generates rectangular hollow frames. Implement a solution to display:
********
* *
* *
* *
* *
* *
* *
********
*/
int main(){
    int rows = 6;
    int cols = 8;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
            
            if(i == 1 || i == rows || j == 1 || j == cols){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
