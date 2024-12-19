#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student student = {"Nguyen Tuan Dung", 18, "0123456789"};
    printf("Name: %s\nAge: %d\nPhone: %s\n", student.name, student.age, student.phoneNumber);
    return 0;
}

