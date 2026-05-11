#include<iostream>
using namespace std;
/*Q1. Create a class Student with data members: name and marks. Use a constructor to initialize
the values and display the student details using a member function.
*/
class Student{
    private:
        string name;
        int marks;
        
    public:
        Student(string n, int m){
            name = n;
            marks = m;
        }
        void display(){
            cout<<"Name: " <<name <<endl;
            cout<<"Marks: " <<marks <<endl;
        }
};
int main(){
    Student s("Vipul", 100);
    s.display();
    return 0;
}
