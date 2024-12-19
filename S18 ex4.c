#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student students[50];
    int n = 5; 

    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("Nhap thong tin sinh vien %d:\n", students[i].id);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Phone number: ");
        scanf("%14s", students[i].phoneNumber);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

