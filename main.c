#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("enter 2 angles here");
    scanf("%f%f",&a,&b);
    c=180-(a+b);
    printf("the 3rd angle is %f",c);
    return 0;
}
