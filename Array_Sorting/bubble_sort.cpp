// Question ----> Implement Bubble Sort

/** 
_____________________________________________________
Write a C++ program to implement bubble sort strictly as describe in the class on 07.05.2024. The program should do the following:

1. Ask the user to enter N (total numbers to sort)
2. Ask the user to enter N integer numbers.
3. Displays the Unsorted Sequence and Sorted sequence one after another.

Example:

Enter N: 6
Enter 6 integer numbers: 34 56 8 14 10 7
Unsorted sequence: 34 56 8 14 10 7
....Sorted Sequence: 7 8 10 14 34 56
______________________________________________________
**/
#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int arr[N];

    cout << "Enter " << N << " integer numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Display unsorted sequence
    cout << "Unsorted sequence: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted sequence
    cout << "Sorted sequence: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
