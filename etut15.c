#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("ENter a no. btw 1 to 7 :");
    scanf("%d", &a);
    if (a >= 1 && a <= 7)
    {
        if (a >= 1 && a <= 6)
        {
            if (a >= 1 && a <= 5)
            {
                if (a >= 1 && a <= 4)
                {
                    if (a >= 1 && a <= 3)
                    {
                        if (a >= 1 && a <= 2)
                        {
                            if (a == 1)
                            {
                                printf("sunday");
                            }
                            else
                            {
                                printf("monday");
                            }
                        }
                        else
                        {
                            printf("tuesday");
                        }
                    }
                    else
                    {
                        printf("wednesday");
                    }
                }
                else
                {
                    printf("thusday");
                }
            }
            else
            {
                printf("friday");
            }
        }
        else
        {
            printf("saturday");
        }
    }

    return 0;
}
