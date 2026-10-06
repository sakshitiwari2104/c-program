/*Convert Seconds into Hours, Minutes and Seconds*/
#include <stdio.h>

int main()
{
    int seconds, hours, minutes, remainingSeconds;
    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("Seconds = %d\n", remainingSeconds);

    return 0;
}