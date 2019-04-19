#include <stdio.h>
#include <stdlib.h>
#define STUDENT_AMOUNT 2
#define POINT_AMOUNT 5
#define  BAD_POINT 2

struct __student
{
    char name[20];
    int group;
    int points[5];
};
typedef struct __student student;

void get_info(student students[STUDENT_AMOUNT]);
void print(student students[STUDENT_AMOUNT]);
void print_bad_students();
void sort(student *students);

int main(int argc, char **argv)
{
    student students[STUDENT_AMOUNT];
    get_info(students);
    print(students);
    sort(students);
    print(students);
    return (0);
}

void get_info(student students[STUDENT_AMOUNT])
{
    for (int i = 0; i < STUDENT_AMOUNT; i++)
    {
        printf("Eter student's name: ");
        scanf("%s", students[i].name);
        printf("Eter student's group: ");
        scanf("%d", &students[i].group);
        printf("Enter student's points: ");
        for (int j = 0; j < POINT_AMOUNT; j++)
            scanf("%d", &students[i].points[j]);
    }
}

void print(student students[STUDENT_AMOUNT])
{
    for(int i = 0; i < STUDENT_AMOUNT; i++){
        printf("[%d] %s group: %d\n", (i+1), students[i].name, students[i].group);
        for (int j = 0; j < POINT_AMOUNT; j++)
            printf("%d ", students[i].points[j]);
        printf("\n");
    }
}

void sort(student *students)
{
    student tmp;
    for(int i = 0; i < STUDENT_AMOUNT; i++)
        for(int z = 1; z < STUDENT_AMOUNT - 1; z++)
            for(int j = 3; j > 0; j--)
            if(students[i].name[j] > students[z].name[j])
            {
                tmp = students[i];
                students[i] = students[z];
                students[z] = tmp;
            }
}

void print_bad_students(student students[STUDENT_AMOUNT])
{
    for(int i = 0; i < STUDENT_AMOUNT; i++)
    {
        printf("to do");
    }
}
