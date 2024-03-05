#include<iostream>
using namespace std;

void Insertionsort(int arr[] , int n ){
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] >= temp){
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = temp;
    }
}

void printArr(int arr[] , int n){
    cout << "The Sorted Array is :- ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array:- ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    Insertionsort(arr , n);
    printArr(arr,n);

}
// Author Prathum Bhangadia(2/3/24)