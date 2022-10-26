#include<stdio.h>
#include<conio.h>
void main(){
int a,temp,count=0;

printf("Enter a no. : ");
scanf("%d",&a);
temp=a;
while (a>=1)
{
    if(temp%a==0){
        count=count + 1;
    }
a-=1;
}
if(count>2){
    printf("Not a prime no.");
}
else{
    printf("a prime no.");
}


getch();





}