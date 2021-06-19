/* Enter your solutions in this file */
#include <stdio.h>

  float average(int x[], int j)
  {
  int sum=0;
  for (int i=0;i<j;i++)
  sum+=x[i];
  float average=sum/j;
  return average;
  }


  int max(int x[], int j)
  {
  int i;
    int max = x[0];
    for (i = 1; i < j; i++)
        if (x[i] > max)
            max = x[i];
            return max;
  }

  int min(int x[], int j)
  {
  int min = x[0];       
    for (int i = 0; i < j; i++)        
       if(x[i] < min)    
           min = x[i]; 
           return min;
  }
