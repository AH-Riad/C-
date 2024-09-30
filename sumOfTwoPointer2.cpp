
#include<iostream>
using namespace std;

void twoPointer(int arr[], int n) {
    int target;
    cout << "Enter target: ";
    cin >> target;

    int low = 0;
    int high = n - 1;  // Initialize high to the last index of the array

    while (low < high) {  // Loop until low and high pointers meet
        if (arr[low] + arr[high] == target) {
            cout << arr[low] << " " << arr[high];
            return;  // Exit the function after finding the pair
        } else if (arr[low] + arr[high] < target) {
            low++;  // If sum is less, move low pointer to the right
        } else {
            high--;  // If sum is greater, move high pointer to the left
        }
    }

    cout << "No such pair found";
}

int main() {
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n = 6;

    twoPointer(arr, n);
    return 0;
}
