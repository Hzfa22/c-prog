#include<stdio.h>
#include<math.h>
int main()
{
    int a , b;
    int diff1 , diff2;
    printf(" enter two numbers to be compared\n");
    scanf("%d%d" , &a , &b);

    diff1 = (100 - a);
    diff2 = 100 - b;
    if( diff1 > diff2)
    {
        printf(" %d is close to 100 than %d " , b , a);

    }
    else if( diff1 < diff2)
    {
        printf(" %d is close to 100 than %d ", a , b);

    }
    else
    printf("the numbers are same. ");

    return 0;
}