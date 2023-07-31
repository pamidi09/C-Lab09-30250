#include <stdio.h>
#include <stdlib.h>

int main()
{




  // Q1
  int arr[10],i,min,max,tot=0;
  float avg;

  for(i=0;i<10;i++)
  {
      printf("Enter a value to the element %d :\n",i+1);
      scanf("%d",&arr[i]);
  }

  //(i)
  min=arr[0];
  for(i=0;i<10;i++)
  {
      if(arr[i]<min)
      {
          min=arr[i];
      }
  }
  printf("The minimum value is %d\n",min);

  //(ii)
  max=arr[0];
  for(i=0;i<10;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
  }
  printf("The maximum value is %d\n",max);

  //(iii)

  for(i=0;i<10;i++)
  {
      tot=tot+arr[i];
  }
  (avg=tot/10);
  printf("The average is %.2f\n",avg);

  //(iv)
  printf("\n");
  for(i=10;i>=0;i--)
  {
      printf("%d  ",arr[i]);
  }

}
