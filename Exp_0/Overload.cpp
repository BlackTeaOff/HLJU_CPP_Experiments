#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

double max(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    cout << max(1, 2) << endl;
    cout << max(1.2, 1.3) << endl;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << max(arr, size) << endl;
}