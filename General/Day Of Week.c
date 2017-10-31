// Program to find Day Of Week using Sakamoto's algorithm
/*
    Let us start with the simple scenario in which leap years did not exist and every year had 365 days.
    Knowing  what day January 1 falls on a certain year, it is easy to find which  day any other date falls.
    This is how you go about it : January has 31 =  7 × 4 + 3 days, so February 1 will fall on the day which follows three  days after January 1.
    Similarly, March 1 will fall on the day three days  after the day corresponding to January 1, April 1 will fall 6 days  after, and so on.
    Thus, the first days of each month are offset with  respect to January 1 by the array {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5}.
    This array is essentially what t[] is. Notice that it is slightly  different from the t[] given in the question, but that is due to leap
    years and will be explained later. Once the day corresponding to the  first date of the month is known, finding the day for any other date
    is  just a matter of addition.

    Since  365 = 7 × 52 + 1, the day corresponding to a given date will become  incremented by 1 every year.
    For example, July 14, 2014 is a Monday and  July 14, 2015 will be a Tuesday. Hence adding the difference between  year numbers allows us
    to switch from the day of a reference year to any  other year.
*/

// Detailed information about the algorithm can be found here: https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week

#include <stdio.h>

int dayofweek(int d, int m, int y)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int main()
{
    int y, m, d;
    printf("Which year: ");
    scanf("%d", &y);
    printf("Which month: ");
    scanf("%d", &m);
    printf("Which date: ");
    scanf("%d", &d);
    int day = dayofweek(d, m, y);

    switch (day)
    {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }
    return 0;
}