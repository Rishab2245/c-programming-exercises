//transpose of a matrix
#include<stdio.h>
#include<conio.h>
void main(){
int a[100][100],k[100][100],i,j,b,c;
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
        k[j][i]=a[i][j];
    }
    
}
printf("matrix is.\n");
for ( i = 0; i < b; i++)
{
    for (j = 0; j < c; j++)
    {
        printf(" %d",a[i][j]);
        
    }
    printf("\n");
    
} 

printf("transpose of matrix is .\n");
for ( i = 0; i < c; i++)
{
    for (j = 0; j < b; j++)
    {
        
        printf(" %d",k[i][j]);
    }
    printf("\n");
    
}


}