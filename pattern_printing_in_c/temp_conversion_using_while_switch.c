#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
float f, c, k;
  int ch;  
    
    while(1)
    {
    printf("\n-----------------------------------------");
    printf("\n---> press 1 for celsious to kelvin\n");
    printf("---> press 2 for Kelvin to celsious\n");
    printf("---> press 3 for fahrenheit to celsious\n");
    printf("---> press 4 for celsious to fahrenheit\n");
    printf("---> press 6 for kelvin to fahrenheit\n");
    printf("---> press 5 for fahrenheit to kelvin\n");
    printf("---> press 7 for exit \n");
    printf("-----------------------------------------\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    
    switch(ch)
    {
    case 1:
    {
    printf("Enter the temperature in celsious : ");
    scanf("%f", &c );
    k = c + 273.15;
    printf(" The Temperature in kelvin is : %f", k);
    break;
    
    }
    
    case 2:
    {
    printf("Enter the temperature in kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf(" The Temperature in celsious is : %f", c);
    break;

    }

    case 3:
    {
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f", &f );
    c = (f-32) * 5/9;
    printf(" The Temperature in celsious is : %f", c);
    
    break;
    }

    case 4:
    {
    printf("Enter the temperature in celsious: ");
    scanf("%f", &c );
    f = (c * 9/5) + 32;
    printf(" The Temperature in fahrenheit is : %f", f);
    break;
    }

    case 5:
    {printf("Enter the temperature in fahrenheit : ");
    scanf("%f", &f );
    k = (f - 32 ) * 5/9 +273.15;
    printf(" The Temperature in kelvin is : %f", k);
    break;
    
    }

    case 6:
    {
    printf("Enter the temperature in kelvin: ");
    scanf("%f", &k);
    f = (k - 273.15) * 9/5 + 32;
    printf(" The Temperature in fahrenheit is : %f", f);
    break;
    }
    
    case 7:
    {
        exit(0);
    }
        default:
        {
            printf("---> WRONG INPUT");
            break;
        }

    }
    }

    

 getch();



}