#include<stdio.h>
#include<conio.h>
void main(){
    int r,k;
    for ( r = 1; r<=5; r++)
    {
        for ( k = r; k <= r*5; k+=r)
        {
           printf("%d\t",k);
        }
        printf("\n");
        
    }
}
    