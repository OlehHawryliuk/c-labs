#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 6

int get_int(int row, int column) {
    printf("[%d][%d]:  ", row, column);
    int value;
    char c;
    while (scanf("%d",&value) != 1) {
        c = getchar();
        while (getchar() != '\n' );
    }
    return value;
}
int getint(char * prompt, int min, int max) {
    printf("%s\n", prompt);
    int value;
    char c;
    while (scanf("%d",&value) != 1) {
        c = getchar();
        while (getchar() != '\n' );
    }
    if (min == 0 && max == 0) return value;
    if (value >= min && value <= max) return value;
    else {
        printf("Неправильне значення (%d) (min = %d, max = %d)\n", value, min, max);
        return getint(prompt, min, max);
    }
}
int random_number(int min_num, int max_num) {
    int result = 0, low_num = 0, hi_num = 0;
    if (min_num < max_num) {
        low_num = min_num;
        hi_num = max_num + 1;
    } else {
        low_num = max_num + 1;
        hi_num = min_num;
    }
    result = (rand() % (hi_num - low_num)) + low_num;
    return result;
}
void print_array(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void make_by_task(int rows, int columns, int matrix[rows][columns]) {
    int columns_number = 0;
    for (int i = 0; i < columns; i++) {
        if (matrix[0][i] < matrix[1][i] && matrix[1][i] < matrix[2][i]) {
            columns_number++;
        }
    }
    if (columns_number > 0) {
        printf("Кількість стовпців: %d\n", columns_number);
        int result_columns[columns_number][rows];
        for (int i = 0, current = 0; i < columns && current < columns_number; i++) {
            if (matrix[0][i] < matrix[1][i] && matrix[1][i] < matrix[2][i]) {
                result_columns[current][0] = matrix[0][i];
                result_columns[current][1] = matrix[1][i];
                result_columns[current][2] = matrix[2][i];
                current++;
            }
        }
        printf("Масив таких стовпчиків:\n");
        print_array(columns_number, rows, result_columns);
    } else printf("Стовпців за заданою умовою не знайдено!");
}
void show_menu(int task) {
    switch (task) {
        case -1: {
            puts("Вихід з програми ...");
            return exit(0);
        }
        case 0: {
            puts("");
            puts("Доступні дії:");
            puts("(0) Меню");
            puts("(1) Заповнити масив псевдовипадковими числами");
            puts("(2) Заповнити масив вручну");
            puts("(-1) Вийти");
            int next = getint("Оберіть дію: ", -1, 2);
            return show_menu(next);
        }
        case 1: {
            puts("Згенерований масив");
            int matrix[ROWS][COLUMNS];
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLUMNS; j++) {
                    matrix[i][j] = random_number(-1000, 1000);
                }
            }
            printf("Початковий масив:\n");
            print_array(ROWS, COLUMNS, matrix);
            make_by_task(ROWS, COLUMNS, matrix);
            return show_menu(0);
        }
        case 2: {
            puts("Заповнення масиву");
            int matrix[ROWS][COLUMNS];
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLUMNS; j++) {
                    matrix[i][j] = get_int(i, j);
                }
            }
            printf("Початковий масив:\n");
            print_array(ROWS, COLUMNS, matrix);
            make_by_task(ROWS, COLUMNS, matrix);
            return show_menu(0);
        }
        default: {
            puts("Недопустиме значення, спробуйте ще раз!");
            return show_menu(0);
        }
    }
}

int main() {
    show_menu(0);
    return 0;
}
 