#include<stdio.h>
#include<math.h>
int main(){
    float l,b,r,area,perimeter,pi=3.14,a,c,s;
    int shape;
    printf("enter 1 to square, 2 to rectangle,3 to circle,4 to triangle");
    scanf("%d",&shape);
    switch (shape)
    {
    case 1:
    printf("\nenter the side of square");
    scanf("%f",&l);
    area=l*l;
    printf("area of square %f",area);
    perimeter=4*l;
    printf("\nperimeter of square %f",perimeter);
        break;
    case 2:
    printf("\nenter the length of rectangle");
    scanf("%f",&l);
    printf("\nenter the breath of rectangle");
    scanf("%f",&b);
    area=l*b;
    printf("area of rectangle %f",area);
    perimeter=2*(l+b);
    printf("\nperimeter of rectangle %f",perimeter);
        break;
    case 3:
    printf("\nenter the radius of circle");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle %f",area);
    perimeter=2*pi*r;
    printf("\nCircumference of circle %f",perimeter);
        break;
    case 4:
    printf("\nenter the a side of triangle");
    scanf("%f",&a);
    printf("\nenter the b side of triangle");
    scanf("%f",&b);
    printf("\nenter the c side of triangle");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle %f",area);
    perimeter=a+b+c;
    printf("\nperimeter of triangle %f",perimeter);
        break;

    default:
    printf("invalid input");
        break;
    }

    return 0;
}