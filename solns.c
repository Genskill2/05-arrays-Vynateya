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
int mode(int x[],int n) 
  {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (x[j] == x[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = x[i];
          }
   }

   return maxValue;
}
int factors(int k, int ret[])
{
int i,count,j;
for(i=0;i<=k;i++)
{
    count=0;
    for(j=2;j<ret[i];j++)
    {
        if((ret[i]%j)==0)
        {
            count=1;
            break;
        }


    }
    
}
}
