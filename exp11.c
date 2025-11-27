#include <stdio.h>
struct Employee {
    int id;
    char name[20];
    float salary;
};
int main() {
    FILE *fp;
    struct Employee e[3] = {
        {101, "Aayan", 35000},
        {102, "Riya", 42000},
        {103, "John", 39000}
    };
    fp = fopen("emp.dat", "wb");
    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);
    fp = fopen("emp.dat", "rb");
    printf("--- Employee Database ---\n");
    while (fread(&e[0], sizeof(struct Employee), 1, fp)) {
        printf("ID: %d  Name: %s  Salary: %.2f\n", e[0].id, e[0].name, e[0].salary);
    }
    fclose(fp);
    return 0;
}
