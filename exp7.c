#include <stdio.h>

int main() {
    int n=5, a[5]={3,17,9,25,10};  
    int max = a[0];

    for(int i=1;i<n;i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}
