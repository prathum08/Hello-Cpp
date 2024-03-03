#include<iostream>
using namespace std;

void Greatestnum(int a , int b , int c){
    if(a > b && a > c){
        cout <<"The First  number is the Greatest "<< a << endl;

    }
    else if(b > a && b > c){
        cout <<"The Second number is the Greatest "<< b << endl;
    }
    else{
        cout <<"The Third number is the Greatest " <<   c << endl;
    }
}

int main(){
    int x,y,z;
    cout << "Enter the number with spaces in between :- ";
    cin >> x >> y >> z;

    Greatestnum(x,y,z);
}