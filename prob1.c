#include<stdio.h>
int main()
{
    int n;
    int diff;
    printf(" Input your n.\n");
    scanf("%d" , &n);
    
    diff = n - 51;
    if( n < 51)
    {
        printf("The absolute difference is %d" , diff);
    } 
    else if( n > 51)
    {
        diff = 3*diff;
        printf(" As you want , your answer is %d" , diff);
    }
    else
    printf(" Thanks");

    return 0;
}