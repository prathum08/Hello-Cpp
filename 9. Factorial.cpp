#include<iostream>
using namespace std;

void Factorial(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact * i;

    }
    cout << fact << endl;

}

int main(){
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    Factorial(n);

    return 0;
    //Author :- Prathum Bhangadia (6/3/24)
}