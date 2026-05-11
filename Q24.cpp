#include<iostream>
using namespace std;
/*Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
A
AB
ABC
ABCD
ABCDE
*/
int main(){
    string letters="ABCDE";
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            cout<<letters[j];
        }
        cout<<endl;
    }
    return 0;
}
