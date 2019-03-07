#include <stdio.h>

int main(void) {
    char c; /*код стану*/
    char f; /*ознака помилки*/
    char b; /*ознака зайнятості*/
    unsigned char n; /*кількість байтів*/
    unsigned int UnitStateWord; /*слово стану*/
    /*уведення складових частин*/
    printf("Уведіть код стану (0-31): ");
    scanf("%d", &c);
    printf("Уведіть ознаку помилки (0/1): ");
    scanf("%d", &f);
    printf("Уведіть ознаку зайнятості (0/1): ");
    scanf("%d", &b);
    printf("Уведіть кількість переданих байтів (0-255): ");
    scanf("%d", &n);
    /*формування упакованого коду*/
    UnitStateWord = ((unsigned int) c & 0x1F) << 11;
    UnitStateWord |= ((unsigned int) f & 1) << 9;
    UnitStateWord |= ((unsigned int) b & 1) << 8;
    UnitStateWord |= n & 0xFF;
    /*виведення результату*/
    printf("\nСлово стану пристрою = %04x\n", UnitStateWord);
    return 0;
}