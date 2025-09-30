#include<stdio.h>

int main() {
    int phy, chem, maths;
    float avg;
    printf("Enter marks of Physics: ");
    scanf("%d", &phy);
    printf("Enter marks of Chemistry: ");
    scanf("%d", &chem);
    printf("Enter marks of Mathematics: ");
    scanf("%d", &maths);
    avg = (phy + chem + maths) / 3.0;
    printf("Average marks: %f \n", avg);

    (avg >= 50) ? printf("Eligible for admission\n") : printf("Not Eligible for admission\n");

        return 0;

}