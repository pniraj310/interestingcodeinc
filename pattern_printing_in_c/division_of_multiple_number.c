#include <stdio.h>
int main()
{
    int n, i;
    double number,result;
    printf("Enter the number of operands : ");
    if(scanf("%d",&n) !=1 || n <= 0)
    {
        printf("Invalid input , pleas enter a positive integer.\n");
        return ;
    }
    printf("Enter number 1 : ");
    if(scanf("%lf", &result) !=1)
    {
        printf("Invalid input . Please enter a valid number. \n");
        return;
    }
    for(i=1;i<n;i++)
    {
        printf("Enter number %d : ", i+1);
        if(scanf("%lf",&number) != 1)
        {
            printf("Invalid input . Please enter a valid number.\n");
            return;
        }
        if(number == 0){

            printf("Error : Division by zero is not allowed. \n");
            return;
        }
        
        result = result/number;

    }
    printf("Result : %.2lf \n",result);


    return 0;

}