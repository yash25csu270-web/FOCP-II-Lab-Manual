#include<iostream>
using namespace std;
//Q2. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
//the area of a circle.
int main(){
double r;
double area;
cout<<"Enter the radius of circle: ";
cin>>r;
area=3.14*(r*r);
cout<<"Area of circle:"<<area<<endl;
return 0;
}
