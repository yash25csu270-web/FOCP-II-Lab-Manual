#include<iostream>
using namespace std;
/*
Q.11. An online learning platform wants to store course information.
Each course should contain:
• Course name
• Instructor name
• Course duration (weeks)
Questions
1. Create a class Course.
2. Initialize course details using a constructor.
3. Write a function to display course details.
4. Create two course objects.
5. Add a destructor that prints a message when a course object is deleted.
*/
class Course{
    string courseName;
    string instructor;
    int duration;
public:
    Course(string c, string i, int d){
        courseName=c;
        instructor=i;
        duration=d;
    }
    void display(){
        cout<<"Course: "<<courseName<<endl;
        cout<<"Instructor: "<<instructor<<endl;
        cout<<"Duration: "<<duration<<" Weeks"<<endl;
        cout<<endl;
    }
    ~Course(){
        cout<<"Course "<<courseName<<" Deleted from memory"<<endl;
    }
};
int main(){
    Course c1("C++ Programming", "Mr. Sharma", 6);
    Course c2("Data Structures", "Ms. Gupta", 8);
    c1.display();
    c2.display();
    return 0;
}
