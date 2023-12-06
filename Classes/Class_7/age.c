#include <stdio.h>

int main ()
{
  char str [80];
  int i;

  printf ("Ierakstiet uzvārdu: ");
  scanf ("%79s",str);  
  printf ("Ierakstiet dzimšanas gadu: ");
  scanf ("%d",&i);
  printf ("%s, jūs esat dzimis %d. gadā.\n",str,i);
  return 0;
}
