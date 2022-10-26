//adding s value between of array by taking input o position and value that user want to input
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],d[100], s, i, b, c, temp,j;
    printf("Enter the size of array :\n");
    scanf("%d", &s);
    printf("Enterd the values :");
    for (i = 0; i < s; i++)
    {
        scanf(" %d", &a[i]);
    }
    printf("\nthe array of all no.s is :");
    for (i = 0; i < s; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nEnter the position where you want insert the number :");
    scanf("%d", &b);
    printf("\nEnter the no. you want to insert at %dth position :", b);
    scanf("%d", &c);
    for (i = 0; i < s + 1; i++)
    {
        if (i + 1 == b)

        {
            temp = i;
            for (j = i + 1; j < s + 1; j++, i++)
            {
                d[j] = a[i];
            }

            d[temp] = c;
            break;
        }
        d[i]=a[i];
    }

    for (   i = 0; i < s+1; i++)
    {
        a[i]=d[i];
    }
        printf("\nthe array of all no.s after adding a new value is :");
    for (i = 0; i < s+1; i++)
    {
        printf(" %d", a[i]);
    }
    
}