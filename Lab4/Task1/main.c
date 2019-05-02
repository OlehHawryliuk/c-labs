#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int problem, c;
    scanf("%d/n", &problem);
    problem = random_number(problem, c);
    printf("");
    return 0;
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