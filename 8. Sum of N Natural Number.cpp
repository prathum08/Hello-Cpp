#include <iostream>
using namespace std;

void Sum(int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum = sum + i;
    }
    cout << sum << endl;
}

int main(){
    int n;
    cout << "Enter the value of N till where you want the sum :- ";
    cin >> n;
    Sum(n);
}