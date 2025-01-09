#include<stdio.h>

int main ()
{   
    int i = 1;
    int j = 8;
    do {
        printf("%d %d \n", i, j);
        j -= 2;
        i += 1;

    }while (i <= 5);
    return 0;
}