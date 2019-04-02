#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * get_input_string(char * string) {
    printf("Введіть строку: ");
    int c;
    string = malloc (sizeof (char));
    string[0] = '\0';
    for (int i = 0; i < 100 && (c = getchar()) != '\n' && c != EOF; i++) {
        string = realloc(string, (i + 2) * sizeof (char));
        string[i] = (char) c;
        string[i + 1] = '\0';
    }
    return string;
}

int main(void) {
    char *buffer = NULL;
    buffer = get_input_string(buffer);
    printf("Input: %s\n", buffer);
    char * space = strtok(buffer, " ");
    int first_space_size = (int) strlen(space);
    char first_space[first_space_size];
    printf("First space: %s\n", space);
    strncpy(first_space, space, sizeof(space) - 1);

    while (space != NULL) {
        int last_space_size = (int) strlen(space);
        char last_space[last_space_size];
        strncpy(last_space, space, sizeof(space) - 1);
        space = strtok(NULL, " ");

        printf("Last space: %s\n", last_space);
    }
    free(buffer);
    free(space);
    buffer = NULL;
    space = NULL;
    return 0;
}