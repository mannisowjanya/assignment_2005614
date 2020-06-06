#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],i,num,evencount=0,oddcount=0;
printf("enter the size of the array: \n");
scanf("%d",&num);
printf("enter the elements of an array: \n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
printf("even numbers in the array: \n");
for(i=0;i<num;i++)
{
if(a[i]%2==0)
{
printf("%d\t",a[i]);
evencount++;
}
}
printf("\n number of even numbers in the array \n"); 
printf("%d",evencount);
printf("\n");
printf("odd numbers in the array: \n");
for(i=0;i<num;i++)
{
if(a[i]%2!=0)
{
printf("%d\t",a[i]);
oddcount++;
}
}
printf("\n number of odd numbers in the array: ");
printf("\n");
printf("%d",oddcount);
}
