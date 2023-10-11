#include <stdio.h>
#define N 3

int main(void)
 {

// int N; 	// NB! nedrīkst!
// N = 20;	// NB! nedrīkst! 
int i = 0;
printf("i mainīgā sākuma vērtība ir %d\n",i);

i = i + 1; 	//divas operācijas - piešķiršana un saskaitīšana
		//saskaitīšanai ir prioritāte ==> tā tiek izpildīta pirmā, tad rezultāts tiek ievietots mainīgajā (i)

if(i<=N)
  {
  printf("i mainīgā nākamā vētība ir %d (un tā ir mazāka par %d)\n",i,N);
  }
else
  {
  printf("i mainīgā nākamā vētība ir kļuvusi lielāka par %d\n",N);
  printf("skaitīšanu apturam\n");
  return 0;
  }

i = i + 1;

if(i<=N)
  {
  printf("i mainīgā nākamā vētība ir %d (un tā ir mazāka par %d)\n",i,N);
  }
else
  {
  printf("i mainīgā nākamā vētība ir kļuvusi lielāka par %d\n",N);
  printf("skaitīšanu apturam\n");
  return 0;
  }

i = i + 1;

if(i<=N)
  {
  printf("i mainīgā nākamā vētība ir %d (un tā ir mazāka par %d)\n",i,N);
  }
else
  {
  printf("i mainīgā nākamā vētība ir kļuvusi lielāka par %d\n",N);
  printf("skaitīšanu apturam\n");
  return 0;
  }

i = i + 1;

if(i<=N)
  {
  printf("i mainīgā nākamā vētība ir %d (un tā ir mazāka par %d)\n",i,N);
  }
else
  {
  printf("i mainīgā nākamā vētība ir kļuvusi lielāka par %d\n",N);
  printf("skaitīšanu apturam\n");
  return 0;
  }
}
