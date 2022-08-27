#include <stdio.h>

int main(){

    char alpa;
    printf("Enter the any Alphabetic Character: ");
    scanf("%c",alpa);
    printf("\n");
    if (alpa>='a' && alpa<='z')
        printf("lowercase");
    else if (alpa>='A' && alpa<='Z')
        printf("Uppercase");
    else
        printf("Not a letter.");
    
    return 0;
}