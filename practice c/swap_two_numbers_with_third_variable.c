#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the one number");
    scanf("%d",&a);
    printf("enter the two number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the value of %d,%d",a,b); 
    system("pause"); 
    return 0;
}