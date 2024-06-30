#include <stdio.h>
#include <conio.h>


int main()
{
int i,n;
double number, sum = 0.0;
printf("Enter nuber of digits : ");

scanf("%d",&n);
for(i=0;i<n;i++)
   {
    printf("Enter number %d: ",i+1);
    scanf("%lf",&number);
    sum = sum + number;
    }    
printf("Sum = %.2lf",sum);

    getch();
}