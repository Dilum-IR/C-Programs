#include <stdio.h>
#include <stdbool.h>
int main(){

    int start,end,count,sign=0;

    printf("Enter the Start Number :");
    scanf("%d",&start);

    printf("Enter the End Number :");
    scanf("%d",&end);

    for (int i = start; i <= end; i++)
    {
        int number = i;
        while (number>0)
        {
            if (number%10==2)
            {
                count++;
            }
            number/=10;   
        }
    } 
    printf("count the number of 2s : %d ",count);
    
    return 0 ;
}