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
        {2, "Sy Trung", 18, "0987654321"},
        {3, "Tuan Dung", 18, "0112233445"},
        {4, "Manh Hung", 18, "0223344556"},
        {5, "Dung Anh", 18, "0334455667"}
    };
    int currentCount = 5; 
    char nameToDelete[50];
    int found = 0;

    printf("Nhap ten sinh vien can xoa: ");
    scanf("%49s", nameToDelete);

    for (int i = 0; i < currentCount; i++) {
        if (strcmp(students[i].name, nameToDelete) == 0) {
            found = 1;
      
            for (int j = i; j < currentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            currentCount--; // Gi?m s? lu?ng sinh viên
            printf("Student '%s' has been deleted.\n", nameToDelete);
            break;
        }
    }

    if (!found) {
        printf("Student '%s' not found.\n", nameToDelete);
    }

    printf("\nAll Student Details:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

