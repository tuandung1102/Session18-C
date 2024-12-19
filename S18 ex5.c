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
        {1, "Tuan Dung", 18, "0123456789"},
        {2, "Dung Anh", 18, "0987654321"},
        {3, "Sy Trung", 18, "0112233445"},
        {4, "Manh Hung", 18, "0223344556"},
        {5, "Quyet Thang", 20, "0334455667"}
    };
    int idToEdit, found = 0;

    printf("Nhap id cua sinh vien de chinh sua: ");
    scanf("%d", &idToEdit);

    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("Editing student with ID %d:\n", idToEdit);
            printf("Enter new name: ");
            scanf("%49s", students[i].name);
            printf("Enter new age: ");
            scanf("%d", &students[i].age);
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", idToEdit);
    }

    printf("\nAll Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

