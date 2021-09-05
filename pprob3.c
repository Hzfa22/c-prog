/* program for finding net salary of an employ*/

#include<stdio.h>
int main()
{
    int Sal;
    int HRA;
    int TA;
    int OTHERS;
    int DA;
    int TC1;
    int TC2;
    int NetS;
    printf(" Please input your basic salary.\n");
    scanf("%d" , &Sal);
    printf(" Please input your HRA.\n");
    scanf("%d" , &HRA);
    printf(" Please input your TA.\n");
    scanf("%d" , &TA);
    printf(" Please input your other parts of salary.\n");
    scanf("%d" , &OTHERS);

    DA = (12.00/100 * Sal);
    TC1 = (14.00/100 * Sal);
    TC2 = ( 15.00/100 * Sal);

    NetS = (Sal + DA + HRA + TA + OTHERS - ( TC1 + TC2));
    
    printf(" YOUR NET SALARY IS = %d", NetS);

    return 0;






}