#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of array \n");
    scanf("%d", &size);
    printf("Enter the elements of the array \n");
    int i, j;
    int array[size];
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for (i = 1; i < size; i++) {
        int key = array[i];
        j = i - 1;
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    printf("Sorted array:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}

