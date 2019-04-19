#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int getint(char *prompt, int min, int max) {
    printf("%s\n", prompt);
    int value;
    char c;
    while (1 != scanf("%d", &value)) {
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
void print_array(int size, int *array) {
    for (int i = 0; i < size; i++) printf("%3d ", array[i]);
    printf("\n");
}
int get_min(int size, int *array) {
    int minimum = array[0];
    for (int i = 0; i < size; i++) if (array[i] < minimum) minimum = array[i];
    return minimum;
}
int get_max(int size, int *array) {
    int maximum = array[0];
    for (int i = 0; i < size; i++) if (array[i] > maximum) maximum = array[i];
    return maximum;
}
int get_elements_number(int size, int *array, int value) {
    int number = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) number++;
    }
    return number;
}
int * get_random_elements_array(int size, int *array) {
    for (int i = 0; i < size; i++) array[i] = random_number(-10, 10);
    return array;
}
int * get_elements_in_range(int size, int *array, int min_value, int max_value, int result_array_size, int *result_array) {
    for (int i = 0, j = 0; i < size && j < result_array_size; i++) {
        int current = array[i];
        if (current > min_value && current < max_value) {
            result_array[j] = current;
            j++;
        }
    }
    return result_array;
}
void quicksort(int *array, int size) {
    if (size < 2) return;
    int pivot = array[size / 2];
    int i, j;
    for (i = 0, j = size - 1; ; i++, j--) {
        while (array[i] < pivot) i++;
        while (array[j] > pivot) j--;
        if (i >= j) break;
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    quicksort(array, i);
    quicksort(array + i, size - i);
}

int main(void) {
    int n = getint("Введіть значення n:", 0, 128);
    int array[n];
    int *A = get_random_elements_array(n, array);
    print_array(n, A);
    int min_value = get_min(n, A);
    int min_elements = get_elements_number(n, A, min_vaint first_elem, second_elem;
    first_elem = scanf("%d",)lue);
    int max_value = get_max(n, A);
    int max_elements = get_elements_number(n, A, max_value);
    printf("Мінімальне: %d (%d);\tМаксимальне: %d (%d)\n", min_value, min_elements, max_value, max_elements);
    int result_array_size = n - min_elements - max_elements;
    int result_array[result_array_size];
    int *B = get_elements_in_range(n, A, min_value, max_value, result_array_size, result_array);
    printf("Отриманий масив B:\n");
    print_array(result_array_size, B);
    quicksort(B, result_array_size);
    printf("Відсортований масив: \n");
    print_array(result_array_size, B);
    return 0;
}
