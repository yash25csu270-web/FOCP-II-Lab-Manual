#include<iostream>
using namespace std;
/*
Q.10 Online Shopping Cart
An e-commerce website wants to represent items in a user's shopping cart.
Each item should contain:
• Product name
• Price
• Quantity
Questions
1. Create a class called Product.
2. Use a constructor to initialize product details.
3. Write a function to calculate total cost = price × quantity.
4. Create two objects for different products.
5. When the program ends, the destructor should display a message indicating that the
product is removed from memory.
*/
class Product{
    string name;
    double price;
    int quantity;
    public:
    Product(string n, double p, int q){
        name=n;
        price=p;
        quantity=q;
    }
    void totalCost(){
        cout <<"Product: "<<name<<endl;
        cout <<"Total Cost: "<<price * quantity<<endl;
        cout << "  " << endl;
    }
    ~Product(){
        cout <<"Product "<<name<<"Removed from Memory"<<endl;
    }
};
int main(){
    Product p1("Laptop", 50000, 1);
    Product p2("Mouse", 500, 2);
    p1.totalCost();
    p2.totalCost();
    return 0;
}
