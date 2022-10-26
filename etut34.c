//concept of string
#include<stdio.h>
#include<conio.h>
void main(){
int i;
char a[20],b[20]={'a'};
printf("Enter the string in array a :- ");
scanf("%s",a);
printf("a array is containing string :-%s\n",a);
printf("a array is containing string :-");
for ( i = 0; a[i]!='\0'; i++)
{
    b[i]=a[i];
    printf("%c",b[i]);
    printf("%s",b);

}
printf("\n%s",b);

}