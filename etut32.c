//printing the dialonals of the matrix
#include<stdio.h>
#include<conio.h>
void main(){
int a[100][100],i,j,b,c;
printf("Enter the no. of rows :");
scanf("%d",&b);
printf("Enter the no. of columns :");
scanf("%d",&c);
printf("Enter the elements of matrix.\n");
for ( i = 0; i < b; i++)
{
    for (j = 0; j < c; j++)
    {
        printf("a%d%d=",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    
}
if (b==c)
{
    printf("matrix is a square matrix.");
    
}
else{
    printf("matrix is not a  square matrix.");
}
printf("\nthe diagonals of the entered matrix are :-\n");
for ( i = 0; i < b; i++)
{
    for (j = 0; j < c; j++)
    {
        if (i==j)
        {   for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
            printf(" %d\n",a[i][j]);
        }
        
    }
    
}
}



