#include <stdio.h>
#include <string.h>
#include <stdbool.h>


typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);


int main() {
    
    Student student1 =  {"Bob", 30, 2.5, true};
    Student student2 =  {"Boc", 31, 2.6, true};
    Student student3 =  {"Bod", 32, 2.7, true};

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-Time: %s\n", (student.isFullTime) ? "yes" : "no");
    printf("\n");
}