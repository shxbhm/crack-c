#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER 2 NUMBERS:");
    scanf("%d%d",&a,&b);
    printf("BEFORE SWAPPING a=%d b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("AFTER SWAPPING a=%d b=%d",a,b);
}