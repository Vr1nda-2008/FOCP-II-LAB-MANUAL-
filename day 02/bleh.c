//grade calculations using if-else statements in c


#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);

    for (int i = 0; i <= 6; i++)
    {
        if (marks > 95 && marks <= 100)
        {
            printf("GRADE A+\n");
            break;
        }
        if (marks > 85 && marks <= 95)
        {
            printf("GRADE A\n");
            break;
        }
        if (marks > 75 && marks <= 85)
        {
            printf("GRADE B+\n");
            break;
        }
        if (marks > 65 && marks <= 75)
        {
            printf("GRADE B\n");
            break;
        }
        if (marks > 55 && marks <= 65)
        {
            printf("GRADE C\n");
            break;
        }
        if (marks > 45 && marks <= 55)
        {
            printf("GRADE D\n");
            break;
        }
        if (marks >= 0 && marks <= 45)
        {
            printf("GRADE F\n");
            break;
        }
        else
        {
            printf("INVALID MARKS\n");
            break;
        }
    }

    return 0;
}