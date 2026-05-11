#include<iostream>
#include<string>
using namespace std;
/*
Q.14 A transport department wants to register vehicles with different levels of information.
Each vehicle stores: Vehicle Number, Owner Name, Vehicle Type and Registration Fee
Requirements:
1. Create a class Vehicle.
2. Implement constructor overloading:
Default Constructor
• Initializes vehicle number as "Not Assigned"
• Owner name as "Unknown"
• Type as "General"
• Fee as 0
Parameterized Constructor (2 parameters): Initializes vehicle number and owner name.
Parameterized Constructor (4 parameters): Initializes all details.
• Create a function displayVehicle() to show vehicle details.
• In main(): Create three objects using different constructors and display details of all
vehicles.
*/
class Vehicle{
    int Vehicle_Number;
    string Owner_Name;
    string Vehicle_Type;
    double Registration_Fee;

public:
    Vehicle(){
        Vehicle_Number=0;
        Owner_Name="Unknown";
        Vehicle_Type="General";
        Registration_Fee=0;
    }
    Vehicle(int v, string o){
        Vehicle_Number=v;
        Owner_Name=o;
        Vehicle_Type="General";
        Registration_Fee=0;
    }
    Vehicle(int v, string o, string t, double f){
        Vehicle_Number=v;
        Owner_Name=o;
        Vehicle_Type=t;
        Registration_Fee=f;
    }
    void displayVehicle(){
        cout<<"Vehicle Number: "<<Vehicle_Number<<endl;
        cout <<"Owner Name: "<<Owner_Name<<endl;
        cout <<"Vehicle Type: "<<Vehicle_Type<<endl;
        cout <<"Registration Fee: "<<Registration_Fee<<endl;
        cout<<endl;
    }
};

int main(){
    Vehicle V1;  
    Vehicle V2(1234, "Rahul");  
    Vehicle V3(5678, "Amit", "Private", 2500);  

    V1.displayVehicle();
    V2.displayVehicle();
    V3.displayVehicle();
 return 0;
}
