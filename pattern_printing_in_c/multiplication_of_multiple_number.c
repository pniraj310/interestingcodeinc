#include <stdio.h>
int main()
{
    
    int i, n;
    float num, mul = 1.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Enter %d element : ",i);
        scanf("%f",&num);
        mul = mul * num;
    }

    printf("The multiplication is : %f ", mul);




    return 0;
}