#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_MAX_LENGTH 1024

char * get_input_string(char * string) {
    printf("Введіть строку: ");
    int c;
    string = malloc (sizeof (char));
    string[0] = '\0';
    for (int i = 0; i < STRING_MAX_LENGTH && (c = getchar()) != '\n' && c != EOF; i++) {
        string = realloc (string, (i + 2) * sizeof (char));
        string[i] = (char) c;
        string[i + 1] = '\0';
    }
    return string;
}
int get_first_space_index(char * string) {
    int index = -1, size = strlen(string);
    for (int i = 0; i < size; i++) if (string[i] == ' ') return i;
    return index;
}
int get_last_space_index(char * string) {
    int index = -1, size = strlen(string);
    for (int i = size - 1; i >= 0; i--) if (string[i] == ' ') return i;
    return index;
}
char * get_string_by_range(const char * string, char * word, int start, int end) {
    int size = end - start + 1;
    if (size > 0) {
        word = malloc (size * sizeof(char));
        for (int i = start, j = 0; i <= end && j < size; i++, j++) word[j] = string[i];
        word[size] = '\0';
    }
    return word;
}
char * swap_first_and_last_words_in_string(char * string, char * swapped_string) {
    int string_length = strlen(string);

    int first_space_index = get_first_space_index(string);
    char * first_word = get_string_by_range(string, NULL, 0, first_space_index);
    int first_word_length = strlen(first_word);

    int last_space_index = get_last_space_index(string);
    char * last_word = get_string_by_range(string, NULL, last_space_index + 1, string_length - 1);
    int last_word_length = strlen(last_word);

    char * middle_words = get_string_by_range(string, NULL, first_space_index + 1, last_space_index - 1);
    int middle_words_length = strlen(middle_words);

    swapped_string = malloc (string_length * sizeof(char));
    int i = 0, j = 0;
    if (last_word_length > 0) {
        while (j < last_word_length) {
            swapped_string[i] = last_word[j];
            i++, j++;
        }
        swapped_string[i] = ' ';
        j = 0, i++;
    }
    if (middle_words_length > 0) {
        while (j < middle_words_length) {
            swapped_string[i] = middle_words[j];
            i++, j++;
        }
        swapped_string[i] = ' ';
        j = 0, i++;
    }
    if (first_word_length > 0) {
        while (j < first_word_length) {
            swapped_string[i] = first_word[j];
            i++, j++;
        }
    }
    swapped_string[string_length] = '\0';
    return swapped_string;
}

int main(void) {
    char * string = get_input_string(NULL);
    printf("Введена строка: %s\n", string);

    char * result_string = swap_first_and_last_words_in_string(string, NULL);
    printf("Змінена строка: %s\n", result_string);

    free(string);
    string = NULL;
    return 0;
}