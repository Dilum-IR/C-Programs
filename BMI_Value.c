#include <stdio.h>

int main(){

    double weight,height;
    double BMI;
    printf("user's body constitution grade: \n");
    printf("Enter the height of a person (m): ");
    scanf("%lf",&weight);

    printf("Enter the weight of a person (kg): ");
    scanf("%lf",&height);

    if(weight>0 && height>0){

        BMI = weight/(height*height);

        if(BMI <18.5)
            printf("Underweight");
        else if(BMI>=18.5 && BMI <25)
            printf("Normal weight");
        else if(BMI>=25 && BMI <30)
            printf("Overweight");
        else
            printf("Obesity");
            
    }
    else
        printf("Invalid height or weight.");

    return 0;
}