#include <stdio.h>
int main(){

    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d number is an Even",num);
    }
    else if(num%2!=0)
        printf("%d number is an odd",num);
    else
        printf("The number you entered is zero.");
    return 0;
}