#include<stdio.h>
#include<conio.h>
void main(){
int a,temp,cube=0,rem;

printf("Enter a no. : ");
scanf("%d",&a);
temp=a;
while (a>0)
{
    rem=a%10;
    cube=cube + rem*rem*rem;
    a=a/10;
}
if(temp==cube){
    printf("The no. is armstrong no.");
}
else{
    printf("The no. is not a armstrong no.");
}
getch();




    
}