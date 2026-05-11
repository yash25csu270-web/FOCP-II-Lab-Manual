#include<iostream>
using namespace std;
/*
Q.13. A computer shop wants to store information about laptops in its inventory. Sometimes
the shop knows only the brand, sometimes brand and RAM, and sometimes brand, RAM, and
price.
Requirements
1. Create a class Laptop with the following data members:
• Brand
• RAM
• Price
2. Implement function overloading using a function called setDetails():
• setDetails(string brand):sets only the brand
• setDetails(string brand, int ram): sets brand and RAM
• setDetails(string brand, int ram, int price): sets brand, RAM, and price
3. Create another function display() to show the laptop details.
4. In the main() function:
• Create three laptop objects.
• Call different overloaded setDetails() functions for each object.
• Display the laptop information.
*/
class Laptop{
    string brand;
    int ram;
    double price;

    public:
    void setDetails(string b){
        brand=b;
        ram=0;
        price=0;
    }
    void setDetails(string b,int R){
        brand=b;
        ram=R;
        price=0;
    }
    void setDetails(string b,int R,double p){
        brand=b;
        ram=R;
        price=p;
    }
    void display(){
        cout<<"Brand:"<<brand<<endl;
        if(ram!=0){
            cout<<"RAM:"<<ram<<endl;
        }
        if(price!=0){
            cout<<"Price"<<price<<endl;
        }
        cout<<endl;
    }

};
int main(){
    Laptop L1;
    L1.setDetails("Avita");
    L1.display();
    Laptop L2;
    L2.setDetails("Apple",16);
    L2.display();
    Laptop L3;
    L3.setDetails("Asus",32,160000);
    L3.display();
    return 0;
}
