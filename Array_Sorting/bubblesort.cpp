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
