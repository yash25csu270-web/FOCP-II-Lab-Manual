#include<iostream>
using namespace std;
/*Q27. A supermarket software maintains item price lists. Implement a solution to store the prices of 10
items in an array and display the maximum price*/
int main(){
    int prices[10] = {100,200,300,400,500,600,700,800,900,100};

    int max = prices[0];  
    for(int i = 1; i < 10; i++){
        if(prices[i] > max){
            max = prices[i];
        }
    }
    cout<<"Maximum price = "<<max;

    return 0;
}
