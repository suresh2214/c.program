#include<stdio.h>
void main()
{
    int a,temp;
    printf("enter a value");
    scanf("%d",&a);
    temp=a%2;
switch(a)
{
    case 1:printf("even");
    break;
    default:printf("odd");
}
}
