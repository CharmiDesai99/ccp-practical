#include <stdio.h>
#include <math.h>
float Area(float a,float b,float c)
{
    if(a+b>c&&a+c>b&&b+c>a)
    {
        float s=(a+b+c)/2;
        float A=sqrt(s*(s-a)*(s-b)*(s-c));
        return A;
    }
    else
    {
        printf("your values are not form any triangle.");
    }
}
int main()
{
    float a,b,c;
    printf("\nEnter the value of first side :");
    scanf("%f",&a);
    printf("\nEnter the value of second side:");
    scanf("%f",&b);
    printf("\nEnter the value of third side:");
    scanf("%f",&c);
    float A=Area(a,b,c);
    printf("\n The Area of the triangle is:%f",A);
    printf("\n24CE023__Desai Charmi.");
    return 0;
}


