#include <stdio.h>
int main (){
int a[10],i,size;
printf("enter the elements of array");

for (i=0;i<10;i++){
    scanf("%d",&a[i]);
}

printf("traversal of array");

for(i=0;i<10;i++){
    printf("%d",a[i]);
}
    return 0;
}