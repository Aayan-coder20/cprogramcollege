
#include <stdio.h>

int fact_iter(int n) {
    int f = 1;
    for(int i=1; i<=n; i++)
        f = f * i;
    return f;
}

int fact_rec(int n) {
    if(n == 0) return 1;
    return n * fact_rec(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Iterative factorial = %d\n", fact_iter(n));
    printf("Recursive factorial = %d\n", fact_rec(n));

    return 0;
}
