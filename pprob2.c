/*finding area and circumference of circle*/

#include<stdio.h>
int main()

{
    float r;
    float A;
    float C;
    printf(" Input the radius of your circle.\n");
    scanf("%f" , &r);
    A = ( 3.14 * r * r );
    C = ( 2 * 3.14 * r );
    printf( " AREA = %f\nCIRCUMFERENCE = %f" , A , C);

    return 0;

}