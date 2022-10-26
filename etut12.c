#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c;

    printf("Enter the value of a :");
    scanf("%f", &a);
    printf("Enter the value of b :");
    scanf("%f", &b);
    printf("\n enter the no. btw 1 to 5 for selecting the operator ");
    printf("\n1 for +");
    printf("\n2 for -");
    printf("\n3 for *");
    printf("\n4 for /");
    printf("\n5 for %%\n");
    scanf("%f", &c);
    if (c == 1)
    {
        printf("\na+b=%f", a + b);
    }
    else if (c == 2)
    {
        printf("\na-b=%f", a - b);
    }
    else if (c == 3)
    {
        printf("\naxb=%f", a * b);
    }
    else if (c == 4)
    {
        printf("\na/b=%f", a / b);
    }
    else if (c == 5)
    {
        printf("\na%%b=%d", (int)a % (int)b);
    }
    else
    {
        printf("\nplease enter the no. btw 1 to 5 for chossing operater");
    }
    return 0;
}
