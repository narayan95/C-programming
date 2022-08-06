#include<stdio.h>
int
main ()
{
  int den, num, t,a, b, gcd, lcm;
  printf ("\nenter number\n");//asking for the numbers from user
  scanf ("%d%d", &a, &b);
  num = a;
  den = b;
  if (b > num)//finalising numerator and denominator by smallest number being denominator
    {
      num = b;
      den = a;
    }
  if (num % den == 0)
    printf ("gcd is %d",den);
  else
    {
      while (num % den != 0)//running a loop to find gcd by simple division technique
      {
          t=den;
          den=num%den;
          num=t;
      }

	}
	gcd=den;
	lcm=(a*b)/gcd;
	printf("gcd=%d\nlcm=%d",gcd,lcm);
}

