//how much no. is odd or how much is even in en input array and transfer the element of a in b if no. is even and transfer the odd no. in c 
#include <stdio.h>
#include <conio.h>
void main(){

int c[100],b[100],a[100],i,s=0,e=0,o=0;
printf("Enter the size of array :\n");
scanf(" %d",&s);
printf("Enter the no. for array : \n");
for ( i = 0; i < s; i++)
{
    scanf(" %d",&a[i]);
}
for ( i = 0; i < s; i++)
{
    if (a[i]%2==0)
    {
        b[e]=a[i];
        e++;
        
    }
    else{
        c[o]=a[i];
        o++;
    }
    
}

printf("the total even numbers in  array a are :%d ",e);
printf("\nthe total odd numbers in  array a are :%d ",o);
printf("\nthe array of all no.s is :");
for ( i = 0; i < s; i++)
{
    printf(" %d",a[i]);
}
printf("\nthe array of even no.s is  is :");
for ( i = 0; i < e; i++)
{
    printf(" %d",b[i]);
}
printf("\nthe array of odd no.s is :");
for ( i = 0; i < o; i++)
{
    printf(" %d",c[i]);
}








}
