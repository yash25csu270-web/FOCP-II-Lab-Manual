#include<iostream>
using namespace std;
//Q1. A teacher wants to calculate the average marks of three students to determine the class performance.
//Implement a solution to accept three numbers and compute their average.

int main(){
    
float a,b,c;

cout<<"Enter the marks of three students:";

cin>>a>>b>>c;

float avg=(a+b+c)/3.0;

cout<<"Average:"<<avg;

return 0;
}
