#include<stdio.h>
int main()
{ int row,col,i,j;
  int arr[100][100];
    printf("enter the order of row and col:");
    scanf("%d%d",&row,&col);
    printf("\nenter the elements of matrix");
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        scanf("%d",&arr[i][j]);
      }
      
    }
    printf("\nthe matrix\n");
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
        printf("%d\t",arr[i][j]);
      }
      printf("\n");
      
    }
    system("cls");
    system("pause");
    return 0;
}