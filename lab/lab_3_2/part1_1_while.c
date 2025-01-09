#include <stdio.h>

int main ()
{
    int i = 1;
    int j = 8;

    while (i <= 5) {
        printf("%d %d \n", i, j);
        j -= 2;
        i ++;
    }
    return 0;

}