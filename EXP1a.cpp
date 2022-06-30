// Write a program for implementing the following sorting methods to arrange a list of integers in ascending order. selectionsort
#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    int i, j, min, temp;
    for(i = 0; i < n; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selectionsort(arr, n);
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}