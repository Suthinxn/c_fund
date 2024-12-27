#include<stdio.h>
int main()
{
    char name[100];
    int salary;
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your salary: ");
    scanf("%d", &salary);
    printf("%s gets %d\n", name, salary);
}