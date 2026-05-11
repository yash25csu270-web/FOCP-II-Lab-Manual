#include<iostream>
using namespace std;
/*Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
int main(){
    for(int j=1;j<=3;j++){
        for(int i=1;i<=5;i++){
        cout<<" "<<i;
        }
        cout<<endl;
    
    }
 return 0;

}
