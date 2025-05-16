#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // Assuming max size is 100
    int *ptr;

    printf("Enter the array's size: ");
    scanf("%d", &n);

    ptr = arr;  // pointer points to the base of array

    // Input array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", (ptr + i));  // using pointer to read values
    }

    // Square each element
    for (i = 0; i < n; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i));  // square using pointer
    }

    // Print in reverse order
    printf("Reversed array elements:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d", *(ptr + i));
        if (i != 0) {
            printf(", ");
        }
    }

    return 0;
}
