//Write a C++ Program to Check Whether a Number is a Positive or Negative Number.
   

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number :- ";
    cin >> n;

    if(n == 0){
        cout << "It is Zero." << endl;
    }
    else if(n < 0){
        cout << "Negative Number " << endl;
    }
    else{
        cout << "Positive Number" << endl;
    }

    return 0;
}

