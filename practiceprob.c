/* converting fahrenheit temp. to celcius temo. */

#include<stdio.h>

int main()
{
    float Tf;
    float Tc;
    printf("Enter your fahrenheit temperature to be converted into celcius temperature.\n");
    scanf("%f", &Tf);
    
    Tc=  5.0/9 * ( Tf - 32 );
    printf("Your celcius temperature is = %f" , Tc);
    
    
    
    return 0;


}