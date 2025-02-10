#include <stdio.h>
#include <string.h>

int main()
{
    int year, month;
    scanf("%d", &month);
    scanf("%d", &year);

    if (month < 1 || month > 12)
    {
        printf("Invalid Month\n");
    }
    if (year < 1)
    {
        printf("Invalid Year");
    }
    if (year >= 1 && (month >= 1 || month <= 12))
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (month == 1)
            {
                printf("31");
            }
            else if (month == 2)
            {
                printf("29");
            }
            else if (month == 3)
            {
                printf("31");
            }
            else if (month == 4)
            {
                printf("30");
            }
            else if (month == 5)
            {
                printf("31");
            }
            else if (month == 6)
            {
                printf("30");
            }
            else if (month == 7)
            {
                printf("31");
            }
            else if (month == 8)
            {
                printf("31");
            }
            else if (month == 9)
            {
                printf("30");
            }
            else if (month == 10)
            {
                printf("31");
            }
            else if (month == 11)
            {
                printf("30");
            }
            else if (month == 12)
            {
                printf("31");
            }
        }
        else
        {
            if (month == 1)
            {
                printf("31");
            }
            else if (month == 2)
            {
                printf("28");
            }
            else if (month == 3)
            {
                printf("31");
            }
            else if (month == 4)
            {
                printf("30");
            }
            else if (month == 5)
            {
                printf("31");
            }
            else if (month == 6)
            {
                printf("30");
            }
            else if (month == 7)
            {
                printf("31");
            }
            else if (month == 8)
            {
                printf("31");
            }
            else if (month == 9)
            {
                printf("30");
            }
            else if (month == 10)
            {
                printf("31");
            }
            else if (month == 11)
            {
                printf("30");
            }
            else if (month == 12)
            {
                printf("31");
            }
        }
    }

    return 0;
}