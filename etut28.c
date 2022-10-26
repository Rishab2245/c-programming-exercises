#include<stdio.h>
#include<conio.h>
void main(){
int a[100],s,i,b,e=0;
printf("Enter the size of array :\n");
scanf("%d",&s);
printf("Enterd the values :");
for(i=0;i<s;i++)
{
scanf(" %d",&a[i]);
}
printf("\nthe array of all no.s is :");
for(i=0;i<s;i++)
{
printf(" %d",a[i]);
}
printf("\nEnter a value from the array that you want to delete :");
scanf("%d",&b);
for(i=0;i<s;i++)
{

if(b==a[i])
{
  continue;
}
a[e]=a[i];
e++;

}
printf("\nthe array of all no.s after deletion :");
for(i=0;i<e;i++)
{
printf(" %d",a[i]);
}
getch();
}