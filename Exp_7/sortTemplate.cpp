#include <iostream>
#include <string.h>

template <typename T>
void mySort(T a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (i != min) {
            T temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main() {
    int a[] = {7, 6, 4, 3, 9, 2, 5};
    mySort(a, 7);
    for (int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    char b[] = "qwertyuiopasdfghjklzxcvbnm";
    int size = strlen(b);
    mySort(b, size);
    printf("%s", b);
}