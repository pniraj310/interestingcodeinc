#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


 int main()
{
int n,i ,ch ;
double number, sum=0, result, mul=1.0;
while (1)

{
printf("\n\n------------------------------------\n");
printf("\n----> press 1 for addition :\n ");
printf("----> press 2 for subration : \n");
printf("----> press 3 for multiplication : \n");
printf("----> press 4 for division : \n ");
printf("----> press 5 for exit : \n");
printf("Enter your choice : ");
scanf("%d", &ch);

    switch(ch)
    {



        case 1:
        {
         printf("Enter number of element : ");
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
         printf("Enter number %d : ",i+1);
         scanf("%lf", &number);
         sum = sum + number;
         }

         printf("\naddtion of the number is %lf",sum);
         break;
        }

        case 2:
        {
            printf("Enter number of element : ");
            scanf("%d", &n);
            if(n<1)
            {
                printf("Enter number is invalid");
                break;
            }
            printf("Enter number 1 : ");
            scanf("%lf", &result);
            for(i=1;i<n;i++)
            {
                printf("Enter number %d : ", i+1);
                scanf("%lf", &number);
                result = result - number;

            }
            printf("Subtraction of the number is %2lf", result);
        break;

        }
        case 3:
        {
            printf("Enter number of element : ");
            scanf("%d", &n);
            for(i=1;i<=n;i++)
            {
                printf("Enter %d element : ",i);
                scanf("%lf",&number);
                mul = mul * number;
            }
            printf("multiplication is : %f",mul);
            break;

        }
        case 4:
        {
            printf("Enter number of element : ");
            if(scanf("%d", &n) != 1 || n<=0)
            {printf("Invalid input, please enter a positive integer.");
            return 0;
            }
            printf("Enter number 1 : ");
            if (scanf("%lf", &result) !=1 )
            {
                printf("Invalid input, please enter a valid number .");
                return 0;

            }
            for(i=1;i<n;i++)
            { printf("Enter number %d : ", i+1);
               if(scanf("%lf", &number) !=1)
                {
                  printf("Invalid input, please enter a valid number . ");
                  return 0 ;

                }
            
                if(number ==0)
                {
                printf("Error : Division by zero is not allowed");
                return 0;
                }
                 result = result / number;
            }
            printf("Division of the number is %lf", result);
            break;
            
        }
        case 5:
        {
            exit(0);
            default:
            {printf("---->WRONG INPUT");
            break;
            }
        
        }
    }



}


    return 0;
}