#include<stdio.h>
int main()
{   int array[5],i,n;
    printf("Enter the element of an array:");
    for (i=0;i<5;i++)
    {scanf("%d",&array[i]);
    }
    printf("Here's your array------->");
    for (i=0;i<5;i++)
    {
     printf("%d\t",array[i]);
    }
    printf("\nenter the number you want sum of two element:");
    scanf("%d",&n);
    if (array[0]+array[1]==n)
    {
        printf("\nsum of element 1st and 2nd are %d\n",n);
    }
    else if (array[1]+array[2]==n)
    {
        printf("\nsum of element 2nd and 3rd are %d\n",n);
    }
    else if (array[2]+array[3]==n)
    {
        printf("\nsum of element 2nd and 3rd are %d\n",n);
    }
    else if (array[3]+array[4]==n)
    {
        printf("\nsum of element 2nd and 3rd are %d\n",n);
    }
    else{
        printf("\nsum not found");
    }
    system("pause");  
    return 0;
}