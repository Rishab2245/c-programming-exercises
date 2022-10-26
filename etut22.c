#include<stdio.h>
#include<conio.h>
void main(){
    int r,c;
    for (r = 0; r <= 5 ; r++)
    {
        for ( c = 1; c <= 5; c++)
        {
            if(c<=(5-r))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
                
        }
        printf("\n");
        
    }
    
}
    