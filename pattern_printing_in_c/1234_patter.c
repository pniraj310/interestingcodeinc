#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter number of row : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d", &c);
    for(i=1;i<=r;i++) // no. of lines / rows -->i
    {
     
    
    for (j=1;j<=c;j++) // no. of columns --> j
    {
        printf(" %d ",j);      
    }
    printf("\n");


    }
    return 0;
}