#include<iostream>
using namespace std;
/*Q12.A mobile store wants to maintain information about different mobile phones. Sometimes
the store knows only the brand, sometimes it knows brand and price, and sometimes it knows
brand, price, and storage capacity.
Problem Statement
Design a class Mobile that stores the following information:
• Brand
• Price
• Storage (in GB)
Requirements
1. Implement constructor overloading with the following constructors:
• A constructor that initializes only the brand.
• A constructor that initializes brand and price.
• A constructor that initializes brand, price, and storage.
2. Write a display function to print the mobile details.
3. Create three objects using different constructors.
4. Display the details of each mobile.
*/
class Mobile{
    string brand;
    double price;
    float storage;

    public:
    Mobile(string b){
        brand=b;
        price=0;
        storage=0;
    }
    Mobile(string b, double p){
        brand=b;
        price=p;
        storage=0;
    }
    Mobile(string b,double p,float s){
        brand=b;
        price=p;
        storage=s;
    }
    void display(){
        cout<<"Brand:"<<brand<<endl;
        if(price!=0){
            cout<<"Price:"<<price<<endl;
        }
        if(storage!=0){
            cout<<"Storage:"<<storage<<endl;
        }
        cout<<endl;

    }

};
int main(){
    Mobile m1("Oneplus");
    Mobile m2("Samsung",799.99);
    Mobile m3("Apple",1111.99,512);
    m1.display();
    m2.display();
    m3.display();
    return 0;
}
