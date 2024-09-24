#include <stdio.h>
int main()
{
  int data[100], stuffeddata[200];
  int i,count=0,j=0,n;
  printf("Enter the number of bits in the data: ");
  scanf("%d",&n);
  printf("Enter the data (0s and 1s only): ");
  for (i=0;i<n;i++) 
  {
    scanf("%d",&data[i]);
  }
  for (i = 0; i < n; i++) 
  {
    if (data[i] == 1) 
    {
      count++;
      stuffeddata[j++] = data[i];
    } 
    else 
    {
      count = 0;
      stuffeddata[j++] = data[i];
    }
    if (count == 5) 
    {
      stuffeddata[j++] = 0;
      count = 0;
    }
  }
  printf("Data after bit stuffing: ");
  for (i = 0; i < j; i++) 
  {
    printf("%d", stuffeddata[i]);
  }
  printf("\n");
  return 0;
}