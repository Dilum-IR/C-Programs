#include <stdio.h>
#include <math.h>
int main(){

    int A,B,C;

    float x1,x2,deno,disc;
    printf("Enter the A ,B & C values;\n");

    printf("A: ");
    scanf("%f",&A);

    printf("B: ");
    scanf("%f",&B);

    printf("C: ");
    scanf("%f",&C);

    disc = (B*B)-(4*A*C);
    deno = 2*A;

    if (disc>0)
    {
        printf("THE ROOTS ARE REAL ROOTS\n");
        x1 = (-1*B)+(sqrt(disc)/deno); 
        x2 = (-1*B)-(sqrt(disc)/deno);
        printf("x1: %.2f x2: %.2f",x1,x2);
    }
    else if (disc==0){
        printf("THE ROOTS ARE REPEATED ROOTS\n");
        x1 = (-1*B)/deno;
        printf("x1 & x2 are same values.\n So, x1 = x2 : %.2f",x1);
    }
    else
        printf("THE ROOTS ARE IMAGINARY ROOTS");
    return 0;
}