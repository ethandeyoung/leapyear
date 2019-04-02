#include <stdio.h>

int main()
{
    int year;

    printf("Please enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    //if the year is divisible by 4 (leap year every 4 years)
    {
            printf("%d is a leap year.", year);
    }
    else
        printf("%d is not a leap year.", year);

    return 0;
}