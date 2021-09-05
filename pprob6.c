#include<stdio.h>
#include<math.h>

int main()
{
    float sd;
    float x1 , x2 , x3 , x4 ,x5 ,x6 , x7 , x8 , x9 , x10;
    float avg;

    printf(" input your given data for x.\n");
    scanf("%f%f%f%f%f%f%f%f%f%f" , &x1 , &x2 ,  &x3 , &x4 ,&x5 , &x6 , &x7 , &x8 , &x9 , &x10);
    
    avg =   1.00/10 * (x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10);
    sd = sqrt(1/10 * (x1 - avg) + (x2 - avg) + (x3 - avg) + (x4 - avg) + (x5 - avg) + (x6 - avg) + (x7 - avg) + (x8 - avg) + (x9 - avg) + (x10 - avg) );

    printf(" obtained standard deviation for your given data is %f" , sd);

    return 0;

}