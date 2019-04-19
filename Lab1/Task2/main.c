#include <stdio.h>

int main(void) {
    char c;
    char f;
    char b;
    unsigned char n;
    unsigned int UnitStateWord;
    printf("Уведіть номер каналу (0-15): ");
    scanf("%d", &c);
    printf("Уведіть ознаку помилки (0/1): ");
    scanf("%d", &f);
    printf("Уведіть код причини переривання (0-255): ");
    scanf("%d", &b);
    printf("Уведіть озаку завершння (0/1): ");
    scanf("%d", &n);

    UnitStateWord = ((unsigned int) c & 0x1F) << 12;
    UnitStateWord |= ((unsigned int) f & 1) << 11;
    UnitStateWord |= ((unsigned int) b & 1) << 3;
    UnitStateWord |= n & 0xFF;
    printf("\nСлово стану пристрою = %04x\n", UnitStateWord);
    return 0;
}