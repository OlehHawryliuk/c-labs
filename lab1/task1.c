#include <stdio.h>

int getint(char * prompt) {
    printf("%s", prompt);
    int x;
    char c;
    while( scanf("%d",&x) != 1 ) {
        c = getchar();
        while ( getchar() != '\n' );
    }
    return x;
}
float getfloat(char * prompt) {
    printf("%s", prompt);
    float x;
    char c;
    while( scanf("%f",&x) != 1 ) {
        c = getchar();
        while ( getchar() != '\n' );
    }
    return x;
}

int main(void) {
    int h = getint("Введіть висоту: \n");
    float w = getfloat("Введіть ширину: \n");
    float square = w * h;
    printf("Площа: %.2f", square);
    return 0;
}