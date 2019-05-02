#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STUDENT_AMOUNT 5
#define POINT_AMOUNT 5
#define BAD_POINT 2

struct __student
{
    char name[20];
    int group;
    int points[5];
};
typedef struct __student student;

void get_info(student students[STUDENT_AMOUNT]);
void print(student students[STUDENT_AMOUNT]);
void print_bad_students(student students[STUDENT_AMOUNT]);
void sort(student *students);
int valid_name(char *str);
int valid_group(int group);
int valid_point(int point);

int main(int argc, char **argv)
{
    student students[STUDENT_AMOUNT];
    get_info(students);
    print(students);
    sort(students);
    print(students);
    print_bad_students(students);
    return (0);
}

void get_info(student students[STUDENT_AMOUNT])
{
    for (int i = 0; i < STUDENT_AMOUNT; i++)
    {
        printf("Eter student's name: ");
        scanf("%s", students[i].name);
        while (valid_name(students[i].name) != 1)
            scanf("%s", students[i].name);

        printf("Eter student's group: ");
        scanf("%d", &students[i].group);
        while (valid_group(students[i].group) != 1)
            scanf("%d", &students[i].group);

        printf("Enter student's points: ");
        for (int j = 0; j < POINT_AMOUNT; j++)
        {
            scanf("%d", &students[i].points[j]);
            while (valid_point(students[i].points[j]) != 1)
                scanf("%d", &students[i].points[j]);
        }
    }
}

void print(student students[STUDENT_AMOUNT])
{
    for (int i = 0; i < STUDENT_AMOUNT; i++)
    {
        printf("[%d] %s, group km-%d\n", (i + 1), students[i].name, students[i].group);
        for (int j = 0; j < POINT_AMOUNT; j++)
            printf("%d ", students[i].points[j]);
        printf("\n");
    }
}

void sort(student *students)
{
    student tmp;
    for (int i = 0; i < STUDENT_AMOUNT; i++)
        for (int j = i + 1; j < STUDENT_AMOUNT; j++)
        {
            for (int z = 3; z > 0; z--)
                if (students[i].name[z] > students[j].name[z])
                {
                    tmp = students[i];
                    students[i] = students[j];
                    students[j] = tmp;
                }
        }
}

void print_bad_students(student students[STUDENT_AMOUNT])
{
    int indx[STUDENT_AMOUNT];
    int message = -1;
    for (int i = 0; i < STUDENT_AMOUNT; i++)
        indx[i] = -1;
    for (int i = 0; i < STUDENT_AMOUNT; i++)
    {
        for (int j = 0; j < POINT_AMOUNT; j++)
        {
            if (students[i].points[j] <= BAD_POINT)
            {
                indx[i] = i;
                message = 1;
                continue;
            }
        }
    }
    if (message == 1)
    {
        for (int i = 0; i < STUDENT_AMOUNT; i++)
        {
            if (indx[i] != -1)
                printf("Student %s from km-%d has bad marks\n", students[indx[i]].name, students[indx[i]].group);
        }
    }
    if (message == -1)
    {
        printf("Nobody has bad marks\n");
    }
}

int valid_name(char *str)
{
    int i;
    i = 0;
    if (strlen(str) < 3)
    {
        printf("Name must be at least 3 characters long\nPlease re-enter name: ");
        return 0;
    }
    if (str[0] < 'A' || str[0] > 'Z')
    {
        printf("Name must start with the capital letter\nPlease re-enter name: ");
        return 0;
    }
    while (str[i])
    {
        if (str[i] < 'A' || str[i] > 'z')
        {
            printf("Unknown charachter: %c\nPlease re-enter name: ", str[i]);
            return 0;
        }
        i++;
    }
    return 1;
}

int valid_group(int group)
{
    if (group <= 0)
    {
        printf("Group must be positive number\nPlease re-enter group: ");
        return 0;
    }
    if (group > 99)
    {
        printf("Groub can only be under 99\nPlease re-enter group: ");
        return 0;
    }
    return 1;
}

int valid_point(int point)
{
    if (point <= 0)
    {
        printf("Point must be positive number\nPlease re-enter point: ");
        return 0;
    }
    if (point > 5)
    {
        printf("Point can not be more than 5\nPlease re-enter point: ");
        return 0;
    }
    return 1;
}