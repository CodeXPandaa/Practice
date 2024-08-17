#include<stdio.h>
int main()
{
    int i,y;
    printf("enter the N number:");
    scanf("%d",&y);
    printf("the no. you enter %d\n",y);
    for (i=1;i<=y;i++)
    {
     printf("%d", i);
     if (i<y)
     {
      printf(",");
     }
     
    }
    system("pause"); 
    return 0;
    
}