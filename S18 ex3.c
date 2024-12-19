#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Phone number: ");
        scanf("%14s", students[i].phoneNumber);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d - Name: %s, Age: %d, Phone: %s\n",
               i + 1, students[i].name, students[i].age, students[i].phoneNumber);
    }
    return 0;
}

