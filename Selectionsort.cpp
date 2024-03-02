#include<iostream>
using namespace std;

void Seletionsort(int arr[] , int n ){
    for(int i = 0 ; i < n-1 ; i++){
        int minIndex = i;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
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

    Seletionsort(arr , n);
    printArr(arr,n);

}