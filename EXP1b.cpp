// Write a program for implementing the following sorting methods to arrange a list of integers in ascending order. QuickSort
#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high){
    int i = low, j = high;
    int pivot = arr[(low + high) / 2];
    while(i <= j){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i <= j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if(low < j){
        quicksort(arr, low, j);
    }
    if(i < high){
        quicksort(arr, i, high);
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
    quicksort(arr, 0, n - 1);
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}