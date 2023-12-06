#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
printf("funkcijas generesana() 1. izmaina:\n");
gen();

printf("funkcijas generesana() 2. izmaina:\n");
gen();
return 0;
}

void gen(void)
{
int flag = 1;
long long int counter = 0, counter2 = 0;
int grauds;

grauds = time(NULL);
srand(grauds);

for(int i=0;i<3;i++)
 {
 counter = 0;
 flag = rand();
 while( flag )
  {
  counter++;
  flag = rand();
  }

 counter2 = counter2 +counter;
 printf("kopējie cikli = %d\n",counter);
 printf("cikli = %d\n",counter2); 
 printf("cilpa = %d\n",i);
 }

return 0;
}
