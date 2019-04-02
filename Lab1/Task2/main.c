#include <stdio.h>

int main(void) {
    char c;
    char f;
    char b;
    unsigned char n;
    unsigned int UnitStateWord;
    printf("Уведіть код стану (0-31): ");
    scanf("%d", &c);
    printf("Уведіть ознаку помилки (0/1): ");
    scanf("%d", &f);
    printf("Уведіть ознаку зайнятості (0/1): ");
    scanf("%d", &b);
    printf("Уведіть кількість переданих байтів (0-255): ");
    scanf("%d", &n);

    UnitStateWord = ((unsigned int) c & 0x1F) << 11;
    UnitStateWord |= ((unsigned int) f & 1) << 9;
    UnitStateWord |= ((unsigned int) b & 1) << 8;
    UnitStateWord |= n & 0xFF;
    printf("\nСлово стану пристрою = %04x\n", UnitStateWord);
    return 0;
}