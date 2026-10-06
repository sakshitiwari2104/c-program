/*Multiply a Number by 2 Using Left Shift*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Result = %d", num << 1);

    return 0;
}