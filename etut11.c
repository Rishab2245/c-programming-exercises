#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;

    system("cls");
    printf("Enter the three no.s to find the biggest no.\n");
    printf("Enter the value of a :\n");
    scanf("%d", &a);
    printf("Enter the value of b :\n");
    scanf("%d", &b);
    printf("Enter the value of c :\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The no a(%d) is greater among them", a);
    }
    else if (b > a && b > c)
    {
        printf("The no(%d) b is greater among them", b);
    }
    else if (c > b && c > a)
    {
        printf("The no(%d) c is greater among them", c);
    }
    else
    {
        printf("can't tell the biggest no.");
    }

    return 0;
}

//#include<stdlib.h>
// system("cls") this is the clrscr() function in vs code
//fflush(stdin) work like \n in char user input keyboard buffer issues in scanf