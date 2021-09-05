/* program to print your name, dob and mobile number.*/

#include<stdio.h>
int main()
{
    char name[20] ;
    char dob[20] ;
    char mob[10];
    
    printf(" what is your name?\n");
    scanf("%s" , &name);
    printf("your DOB?\n");
    scanf("%s" , &dob);
    printf(" your mob no.?\n");
    scanf("%s" , &mob);

    printf("HII THERE = %s\nYOUR DATE OF BIRTH IS = %s\nAND YOUR MOBILE NUMBER IS = %s" , name , dob , mob);

    return 0;


}