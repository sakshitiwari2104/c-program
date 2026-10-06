/*Sum of Digits of a 3-Digit Number*/
#include <stdio.h>
int main()
{
    int num, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    sum = num / 100;
    sum = sum + (num / 10) % 10;
    sum = sum + num % 10;

    printf("Sum of digits = %d", sum);

    return 0;
}