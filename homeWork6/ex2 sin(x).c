#include <stdio.h>

int myFac (int);
double myPow (double, int);



int
main ()
{
  float x, y, sum = 0;
  int i, j, limit;

  printf ("set the value for x in sin (x): ");
  scanf ("%f", &x);

  printf ("set the value to which you want to extend the series: ");
  scanf ("%d", &limit);

  y = x;
  x = x * (3.1415 / 180);

  for (i = 1, j = 1; i <= limit; i++, j = j + 2)
    {
      if (i % 2 != 0)
	{
	  sum = sum + myPow (x, j) / myFac (j);
	}
      else
	sum = sum - myPow (x, j) / myFac (j);
    }

  printf ("Sin(%0.1f): %f", y, sum);
  return 0;
}


double
myPow (double x, int n)
{
  if (n != 0)
    {

      return x * myPow (x, n - 1);
    }
  else
    {

      return 1;
    }
}

int
myFac (int x)
{
  int i, fac = 1;
  for (i = 1; i <= x; i++)
    fac = fac * i;
  return fac;
}
