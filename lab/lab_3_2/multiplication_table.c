#include <stdio.h>
int main ()
{
    int num;
    printf("\nEnter a number for multiplication table: ");
    scanf("%d", &num);
    int result = 0;
    int i = 1;

    for (i = 1; i <= 6; i++) {
        result += num;
        if (result > 60) {
            break;
        }
        printf("%d  %d \n", i, result);
    }
    return 0;

}