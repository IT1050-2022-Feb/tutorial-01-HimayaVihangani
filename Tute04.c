/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int maximum(int a, int b);
int minimum (int a, int b);
int multiply (int a, int b);
int main()
{
  int no1, no2;
  printf("enter a value for no1:");
  scanf("%d", &no1);
  printf("enter a value for no2:");
  scanf("%d", &no2);

  printf("%d\n", maximum(no1, no2));
  printf("%d\n",minimum(np1,no2));
  printf("%d\n",multiply(no1,no2));
  return 0;
}
int maximum(int a, int b)
}
if (a>b)
return b;
}
int minimum(int a , int b)
{
if(a<b)
return a;
else
return b;
}
int multiply (int a, int b)
{
  return a*b;
}
}
