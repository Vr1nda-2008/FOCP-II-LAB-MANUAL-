#include <stdio.h>

int main()
{

    double num, sum = 0;
    printf("enter the numbers to sum,  enter 0 to stop: \n");

    while (1)
    {
        printf("enter number: ");
        scanf("%lf", &num);

        if (num == 0)
        {
            break;
        }

        if (num > 0)
        {
            sum = sum + num;
            printf("the sum is: %.2lf\n", sum);
        }

        if (num < 0)
        {
            continue;
        }
    }

    return 0;
}