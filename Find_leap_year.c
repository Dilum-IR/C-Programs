#include <stdio.h>

int main(){

    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if (year>0){
        if (year%4==0 && year%100 !=0)
            printf("%d is a leap year.",year);
        else if (year%400==0)
            printf("%d is a leap year.",year);
        else if (year%100==0)
            printf("%d is not a leap year.",year);
        else
            printf("%d is not a leap year.",year);
    }
    else
        printf("Invalid Year.Please enter the valid year.");
    return 0;
}