#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("Array in reverse:\n");
    for(int i = 4; i >= 0; i--)
        printf("%d ", *(p + i));

    return 0;
}
