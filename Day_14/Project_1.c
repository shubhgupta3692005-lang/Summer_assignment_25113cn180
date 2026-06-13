#include <stdio.h>
int main()
{
    int n, i, x, flag = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:  ");
    for(i = 0;i < n;i++)
     scanf("%d",&arr[i]);
     printf("Enter the element to be searched");
     scanf("%d",&x);
     for(i = 0;i < n;i++)
     {
        if(arr[i] == x)
          flag = 1;
          break;
     }
     if(flag == 1)
     printf("The element fount at the position: %d",(i+1));
     else
     printf("The entered element is not found");
     return 0;
}