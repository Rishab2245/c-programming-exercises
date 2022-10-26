#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b = 0, c = 1, d = 0, i = 1, k = 0;
    printf("Enter the no. u want to search in phebonaki series :");
    scanf("%d", &a);

    while (d <= a)
    {
        d = b + c;
        if (d == a || a == b || a == c)
        {
            printf("your entered no. is in phebonaki series.");
            k = 1;
            break;
        }

        b = c;
        c = d;
    }

    if (k == 0)
    {
        printf("Your entered no. is not in phebonaki series");
    }
}
