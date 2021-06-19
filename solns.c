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
