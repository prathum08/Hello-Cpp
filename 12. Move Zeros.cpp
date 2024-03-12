#include<iostream>
using namespace std;

void moveZeros(int arr[] , int n){
    int i = 0;
    for(int j = 0 ; j < n ; j++){
        if(arr[j] != 0){
            swap(arr[j] , arr[i]);
            i++;
        }
    }
}

int print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array :- ";
    cin >> n;
    int arr[n];
    cout << "Enter the elments :- ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    moveZeros(arr , n);
    print(arr , n);
    return 0;
}