// find the biggest and smallest no. and its position in an array  elements input by user
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, s, big, small, j = 1, k = 1;
    printf("Enter the size of the array :");
    scanf("%d", &s);
    int a[s];
    for (i = 0; i < s; i++)
    {
        printf("enter the no. :");
        scanf("%d", &a[i]);
    }
    big = a[0];
    small = a[0];
    for (i = 0; i < s; i++)
    {

        if (a[i] > big)
        {
            big = a[i];
            j = i + 1;
        }
        if (a[i] < small)
        {
            small = a[i];
            k = i + 1;
        }
    }
    printf("\nthe biggest no. is %d and its position is %dth", big, j);
    printf("\nthe smallest no. is %d and its position is %dth", small, k);
    printf("The array is :");
    for ( i = 0; i < s; i++)
    {
        printf(" %d",a[i]);
    }
    
}
