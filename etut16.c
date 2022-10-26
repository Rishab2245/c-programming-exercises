#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter the first value a:");
    scanf("%d", &a);
    printf("Enter the first value b:");
    scanf("%d", &b);
    printf("Enter the first value c:");
    scanf("%d", &c);
    if (a != b)
    {
        if (a > b)
        {
            if (a >= c)
            {
                if (a > c)
                {
                    printf("the 1st no. is greater");
                }
                else
                {
                    printf("the 1st  and 3rd no. is greater is greater than 2nd");
                }
            }

            else
            {
                printf("the 1st and 3rd no. are  greater than 2nd");
            }
        }
        else if (b >= c)
        {
            if (b > c)
            {
                printf("the 2nd  no. is greater");
            }
            else
            {
                printf("the 2nd and 3rd no. is greater");
            }
        }
        else
        {
            printf("the 3rd no. is greater");
        }
    }
    else
    {

        if (b == c)
        {
            printf("all the no.s are same or equal");
        }
        else
        {
            if (a > c)
            {
                printf("the 1st and 2nd no. is greater than 3rd");
            }
            else
            {
                printf("the 3rd no. is greater");
            }
        }
    }
    getch();
    return 0;
}
