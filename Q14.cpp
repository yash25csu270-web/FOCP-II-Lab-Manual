#include<iostream>
#include<string>
using namespace std;
/*Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of each operation*/
float sum(float x,float y){
    return x+y;
}
float difference(float x,float y){
    return x-y;
}
float product(float x,float y){
    return x*y;
}
float divide(float x, float y){
    return x/y;
}
int remainder(int x, int y){
    return x%y;
}
int main(){
    float x, y;
    string opr;
    while(true){
        cout<<"Enter the type of operation you want to do:Addition,Subtraction,Product,Division,Remainder,Exit: ";
        cin>>opr;
        if(opr=="Exit"){
            cout<<"Exiting program"<<endl;
            break;
        }
        else if(opr=="Addition"){

            cout<<"Enter the two no's:";
            cin>>x>>y;
            cout<<"Sum:"<<sum(x,y)<<endl;
        }
        else if(opr=="Subtraction"){

            cout<<"Enter the two no's:";
            cin>>x>>y;
            cout<<"Difference:"<<difference(x,y)<<endl;
        }
        else if(opr=="Product"){
            cout<<"Enter the two no's:";
            cin>>x>>y;
            cout<<"Product:"<<product(x,y)<<endl;
        }
       else if(opr=="Division"){
            cout<<"Enter the two no's:";
            cin>>x>>y;
            if(y==0){
                cout<<"Error!Division by 0."<<endl;
            }
            else{
            cout<<"Division:"<<divide(x,y)<<endl;
            }
        }
        else if(opr=="Remainder"){
    int a, b;
    cout<<"Enter two integers:";
    cin>>a>>b;

    if(b==0){
        cout<<"Error! Division by 0."<<endl;
    }
    else{
        cout<<"Remainder:"<<remainder(a,b)<<endl;
    }
        }
     else{
            cout<<"Invalid Operation"<<endl;
        }
        
}
return 0;
}
