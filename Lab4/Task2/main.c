#include <stdio.h>
#include <stdlib.h>

int element_sum(int a, int b) {
    int c, i = b, g = a;
    c++;
    if ( a ==  0)
        return i;
    if ( b == 0)
        return g;
    if (c < a) {
        for (int i = 0; i < a; ++i)
            return element_sum(a, c);}
        else if (c == a) {
             for (int j = 0; j < b; ++j)
                 c++;
    }
    return c;
}
    int main(){
    int first_elem, second_elem, result;
    printf("введіть 1 елемент\n");
    scanf("%d", &first_elem );
    printf("введіть 2 елемент\n");
    scanf("%d", &second_elem );
    result = element_sum(first_elem, second_elem);
    printf("Сума: %d" , result );
    return 0;

}
