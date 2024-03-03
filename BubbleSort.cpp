#include<iostream>
using namespace std;

void Bubblesort(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        bool swapped = false;
        for(int j = 0 ; j < n - i - 1 ; j++){             // j < n - i - 1 :- This is because it will iterate all the values
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
void printArr(int arr[] , int n){
    cout << "The Sorted Array after Bubble Sort :- ";
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
    cout << "Elements before Sorting:- ";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    Bubblesort(arr , n);
    printArr(arr,n);

}