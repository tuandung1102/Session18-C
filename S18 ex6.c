#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

int main() {
    Student students[50] = {
        {1, "Quyet Thang", 20, "0123456789"},
        {2, "Tuan Dung", 18, "0987654321"},
        {3, "Sy Trung", 18, "0112233445"},
        {4, "Dung Anh", 18, "0223344556"},
        {5, "Manh Hung", 18, "0334455667"}
    };
    int currentCount = 5; 

    if (currentCount < 50) {
        students[currentCount].id = currentCount + 1;
        printf("Nhap name: ");
        scanf("%49s", students[currentCount].name);
        printf("Nhap age: ");
        scanf("%d", &students[currentCount].age);
        printf("Nhap phone number: ");
        scanf("%14s", students[currentCount].phoneNumber);
        currentCount++;
    } else {
        printf("Cannot add more students. Array is full.\n");
    }

    printf("\nAll Student Details:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

