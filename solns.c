/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
float average(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }

  float average(int x[], int j)
  {
  int sum=0;
  for (int i=0;i<j;i++)
  sum+=x[i];
  float average=sum/j;
  return average;
  }

#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
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
