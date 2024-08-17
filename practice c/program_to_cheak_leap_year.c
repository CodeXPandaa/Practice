#include<stdio.h>
int main()
{
    int year;
    printf("enter the year you want to cheak :");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("the year you enter %d is leap year",year);
    }
    else{
        printf("the year you enter %d is not leap year",year);
    }
    system("pause");
    return 0;
}