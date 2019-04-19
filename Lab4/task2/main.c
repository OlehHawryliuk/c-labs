#include <stdio.h>
#include <stdlib.h>

int element_sum(int a, int b) {
    int p, sum ;
    sum = a;
    for (p = 0; p < b; ++p) {
    sum++;
    }
        return sum;
    }



    int main(){
    printf("введіть 1 елемент\n");
    int first_elem = scanf("%d", &first_elem );
    printf("введіть 2 елемент\n");
    int second_elem = scanf("%d", &second_elem );
    int result = element_sum(first_elem, second_elem);
    printf("Сума: %d" , result );
    return 0;

}
