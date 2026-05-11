#include<iostream>
using namespace std;
/*Q26. The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/
int main(){
    int m1,m2,m3,m4,m5;
    cout<<"Enter the scores in 5 subjects:";
    cin>>m1>>m2>>m3>>m4>>m5;
    int total=m1+m2+m3+m4+m5;
    float per=(total/5.0);
    cout<<"Result:"<<endl<<"Marks Obtained="<<total<<endl<<"Percentage="<<per<<endl;
return 0;
}
