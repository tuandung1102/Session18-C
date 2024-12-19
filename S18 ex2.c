#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student student;
    printf("Nhap name: ");
    scanf("%49s", student.name);
    printf("Nhap age: ");
    scanf("%d", &student.age);
    printf("Nhap phone number: ");
    scanf("%14s", student.phoneNumber);

    printf("\nName: %s\nAge: %d\nPhone: %s\n", student.name, student.age, student.phoneNumber);
    return 0;
}

