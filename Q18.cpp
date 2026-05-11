#include<iostream>
#include<string>
using namespace std;
/*Q18. A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome.*/
int main(){
    string ID;
    cout<<"Enter ID";
    cin>>ID;
    string reverse="";
    for(int i=ID.size()-1;i>=0;i--){
        reverse=reverse+ID[i];
    }
    if(ID==reverse){
        cout<<"ID is Palindrome"<<endl;
    }
    else{
        cout<<"ID is not a Palindrome"<<endl;
    }
return 0;
}
