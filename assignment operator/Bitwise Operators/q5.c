/*Divide a Number by 2 Using Right Shift*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Result = %d", num >> 1);

    return 0;
}