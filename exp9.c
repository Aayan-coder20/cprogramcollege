#include <stdio.h>

struct student_record {
    char name[20];
    int roll;
    int marks;
};
int main() {
    struct student_record s[5];
    int i, top = 0;

    for(i=0;i<5;i++) {
        printf("Enter name, roll, marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        if(s[i].marks > s[top].marks)
            top = i;
    }
    printf("\nTopper:\nName: %s\nRoll: %d\nMarks: %d",
           s[top].name, s[top].roll, s[top].marks);

    return 0;
}
