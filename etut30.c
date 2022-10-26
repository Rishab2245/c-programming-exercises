//sum of two matrix
#include<stdio.h>
#include<conio.h>
void main(){
int a[10][10],b[10][10],c,d,i,j,sum[10][10];
printf("Enter the no. of rows :");
scanf("%d",&c);
printf("Enter the no. of columns :");
scanf("%d",&d);
printf("Enter the elements for matrix a \n");
for ( i = 0; i < c; i++)
{
    for ( j = 0; j < d; j++)
    {
        printf("Enter the no :");
        scanf("%d",&a[i][j]);
    }
    
}
printf("Enter the elements for matrix b \n");
for ( i = 0; i < c; i++)
{
    for ( j = 0; j < d; j++)
    {
        printf("Enter the no :");
        scanf("%d",&b[i][j]);
    }
    
}
printf("The matrix after sum of matrix a and matrix b.\n");
for ( i = 0; i < c; i++)
{
    for ( j = 0; j < d; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
        printf(" %d",sum[i][j]);
    }
    printf("\n");
    
}





}