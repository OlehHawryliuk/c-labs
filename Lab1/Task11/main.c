#include <stdio.h>
#include <stdlib.h>

int getint(char * prompt, int min, int max) {
    printf("%s\n", prompt);
    int value;
    char c;
    while (scanf("%d",&value) != 1) {
        c = getchar();
        while (getchar() != '\n' );
    }
    if (value >= min && value <= max) return value;
    else {
        printf("Неправильне значення (%d) (min = %d, max = %d)\n", value, min, max);
        return getint(prompt, min, max);
    }
}
float getfloat (char *prompt, float min, float max) {
    printf("%s\n", prompt);
    float value;
    char c;
    while (scanf("%f",&value) != 1) {
        c = getchar();
        while (getchar() != '\n');
    }
    if (value >= min && value <= max) return value;
    else {
        printf("Неправильне значення (%.2f) (min = %.2f, max = %.2f)\n", value, min, max);
        return getfloat(prompt, min, max);
    }
}
void show_menu(int task) {
    switch (task) {
        case -1: {
            puts("Вихід з програми ...");
            return exit(0);
        }
        case 0: {
            puts("Доступні дії:");
            puts("(0) Меню");
            puts("(1) Обчислити площу трикутника за основою та висотою");
            puts("(2) Обчислити об’єм прямокутного паралелепіпеда за трьома сторонами");
            puts("(-1) Вийти");
            int next = getint("Оберіть дію: ", -1, 2);
            return show_menu(next);
        }
        case 1: {
            puts("Обчислення площі трикутника");
            float w = getfloat("Введіть довжину основи трикутника: ", 0.1, 999.9);
            float h = getfloat("Введіть довжиу висоти трикутика: ", 0.1, 999.9);
            float square = (float) 0.5 * w * h;
            printf("Площа заданого трикутника: %.2f\n", square);
            return show_menu(0);
        }
        case 2: {
            puts("Обчислення об'єму прямокутного паралелепіпеда");
            float a = getfloat("Введіть 1 сторону: ", 0.1, 999.9);
            float b = getfloat("Введіть 2 сторону: ", 0.1, 999.9);
            float c = getfloat("Введіть 3 сторону: ", 0.1, 999.9);
            float volume = a * b * c;
            printf("Об'єм прямокутного паралелепіпеда: %.2f\n", volume);
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
