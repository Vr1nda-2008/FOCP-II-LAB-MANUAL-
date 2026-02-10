#include <stdio.h>

int main()
{
    int num, n;
    printf("how many numbers you want to sum: ");
    scanf("%d", &num);

    int i, sum = 0;
    while(num>=0){

        for (i = 1; i <= num; i++)
        {
            printf("enter %d number: ", i);
            scanf("%d", &n);
            sum = sum + n;
            
        }
    }

    printf("the sum is: %d\n", sum);


    /*
    double num, sum=0;
    printf("enter the numbers to sum,  enter 0 to stop: \n");

    while(1{
    printf("enter number: ");
    scanf("%lf", &num);}
    
    if(num == 0){
    break;
    }

    if(num > 0){
    sum= sum+num;
    printf("the sum is: %.2lf\n", sum);
    }

    if(num < 0){
    continue;
    }
   

    */

    

    return 0;
}