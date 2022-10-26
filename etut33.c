//multiplication of two matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100][100],b[100][100],multi[100][100],sum=0,i,j,d,e,c,k;
    printf("Enter the no. of rows and columns for first matrix(a):-\n");
    printf("Enter the no. of rows :");
scanf("%d",&c);
printf("Enter the no. of columns :");
scanf("%d",&d);
printf("Enter the no. of  columns for second matrix(b) because rows is equal to the columns of first matrix for multiplication happend :-\n");
printf("Enter the no. of columns :");
scanf("%d",&e);
printf("Enter the elements for first matrix(a).\n");
for ( i = 0; i < c; i++)
{
    for (j = 0; j < d; j++)
    {
        
        scanf("%d",&a[i][j]);
        
    }
    
}
printf("Enter the elements for second matrix(b).\n");
for ( i = 0; i < d; i++)
{
    for (j = 0; j < e; j++)
    {
        
        scanf("%d",&b[i][j]);
        
    }
    
}
for ( i = 0; i < c; i++)
{
    for ( j = 0; j < e; j++)
    {
        for ( k = 0; k < d; k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
        multi[i][j]=sum;
        
    }
    
}
printf("the matrix after multiplication is :-\n");
for ( i = 0; i < c; i++)
{   printf("[");
    for (j = 0; j < e; j++)
    {
        
        printf(" %d",multi[i][j]);
        
    }
    printf("]\n");
    
}

        return 0;
}
