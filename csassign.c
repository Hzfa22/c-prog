 /* assignment problem to find roots using sridhar acharyas formula*/

#include<stdio.h>
#include<math.h>

int main() 
{
    float a, b, c;
    float root1, root2;
    float root_part, denom;

    printf("Enter coefficients a, b, c from the given quadratic equation of the type ax^2+bx+c=0\n");
    scanf("%f%f%f", &a, &b, &c);

    root_part = (b * b - 4 * a * c); 
    denom = 2 * a;
    if(root_part==0)
    {
        printf("The roots of the quadratic equation are equal.\n");
        root1=-b/denom;
        root2=root1;
        printf("Root1 = %f\nRoot2 = %f" , root1, root2);

    }
    else if (root_part>0)
    {
        printf("The roots of the quadratic equation are real and different\n");
        root1 = (- b + sqrt(root_part)/ denom);
        root2 = (- b - sqrt(root_part)/ denom);
        printf("Root1 = %f\nRoot2 = %f" , root1, root2);
    }
    else
    printf("The roots of quadratic equation are imaginary.\n no solution\n");
    
    return 0;
}