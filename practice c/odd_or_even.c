#include<stdio.h>
int main()
{   int n;
    printf("enter the number you want to cheak:");
    scanf("%d",&n);
    if (n%2==0)
    {
     printf("the number you enter is %d and it's even number",n);
    }
    else{
        printf("the number you enter is %d and it's odd number",n);
    }
    return 0;
}