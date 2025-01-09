#include<stdio.h>

int main()
{
    int i, j, k, num;

    printf("Enter a number : ");
    scanf("%d",&num);

    for (i=num; i>0; i--) {

        for (j=num; j > i; j--) {
            printf(" ");
        }

        for (j=0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
