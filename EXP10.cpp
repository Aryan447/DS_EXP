// C++ program to implement binary search algorithm
#include<iostream>
using namespace std;

void binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout<<"Element found at index "<<mid;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (low > high)
        cout<<"\nElement not found";
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Given array is \n";
    for (int i = 0; i < 10; ++i)
        cout << arr[i] << " ";
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout<<"\nEnter the element to be searched: ";
    cin>>key;
    binarySearch(arr, n, key);
    cout<<endl;
    return 0;
}