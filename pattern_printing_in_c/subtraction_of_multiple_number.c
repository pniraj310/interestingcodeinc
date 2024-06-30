#include <stdio.h>
int main()
{
    int n, i;
    double number, result;
    printf("Enter the number of integers : ");
    scanf("%d", &n);
    if(n<1)
    {
        printf("Invalid Input:");
        return 0;
    }
    printf("Enter number 1: ");
    scanf("%lf", &result);
    for(i=1; i<n; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%lf", &number);
        result = result - number;

    }
        printf("The result is : %lf\n", result);


    return 0;
}