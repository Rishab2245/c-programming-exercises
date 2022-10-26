#include <stdio.h>
int main()
{
    char a;
    float b, bonus, total;
    printf("Enter the gender :");
    scanf("%c", &a);
    printf("Enter the salary :");
    scanf("%f", &b);
    printf(" salary is :%f\n", b);
    if (a == 'f')
    {
        if (b > 5000)
        {
            bonus = (5 * b) / 100;
            total = b + bonus;
            printf(" bonus is :%f\n", bonus);
            printf(" total is :%f\n", total);
        }
        else
        {
            bonus = (2 * b) / 100;
            total = b + bonus;
            printf(" bonus is :%f\n", bonus);
            printf(" total is :%f\n", total);
        }
    }
    else if (a == 'm')
    {

        bonus = (2 * b) / 100;
        total = b + bonus;
        printf(" bonus is :%f\n", bonus);
        printf(" total is :%f\n", total);
    }
    else
    {
        printf("enter the gender btw m and f");
    }
}