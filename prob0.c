#include<stdio.h>
int main()
{
    int a , b;
    int S;
    printf("Input your two numbers.\n");
    scanf("%d%d" , &a , &b);

    if( a==b )
    {
        S = 3*a;
    printf(" The two numbers are same, so, you'll get %d\n" , S);
    }

    else if( a != b)
    {
         S = a + b;
    printf(" The sum of two numbers is %d\n" , S);
    }

    else
    printf(" Thank you for your time.");



    
    
    
    
    return 0;
}