#include <stdio.h>
int main()
{
    int start , end , i , j , flag = 1 ;
    printf("Enter a range ");
    printf("Enter the number from which the range of prime numbers is starting ");
    scanf("%d",&start);
    printf("Enter the number upto which the range of prime numbers is terminating ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        flag = 1;
       for(j=2;j<=(i/2);j++)
       {
        if(i % j == 0)
        {
             flag = 0;
             break;
        }
       }
       if(flag == 1)
       printf("%d ",i);
    }
    return 0;
}