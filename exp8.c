#include <stdio.h>

int main() {
    char s[] = "Aayan";   
    int i = 0;

    while (s[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}
