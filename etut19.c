#include<stdio.h>
#include<conio.h>
void main(){
int a,temp,fact=1;

printf("Enter a no. : ");
scanf("%d",&a);
temp=a;
while (a>0)
{
    fact=fact*a;
    a-=1;
}
printf("the factorial of %d is : %d",temp,fact);
getch();}
 