#include <stdio.h>
int main() {
    char s[] = "madam";   
    int i = 0, j;
    for (j = 0; s[j] != '\0'; j++);  
    j--;                             
    while (i < j) {
        if (s[i] != s[j]) {
            printf("Not Palindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome");
    return 0;
}
