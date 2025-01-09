#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    int i;
    int result;
    for (i = 1; i <= 5; i+=1){
        result += num;
        printf("\n%d", i);
        printf("  %d", result);
    }
    return 0;
}