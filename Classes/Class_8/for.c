#include <stdio.h>
#define N 10
#define X 7

int main(void)
 {

// int N; 	// NB! nedrīkst!
// N = 20;	// NB! nedrīkst! 
int i = 0;
printf("i mainīgā sākuma vērtība ir %d\n",i);

	 	//divas operācijas - piešķiršana un saskaitīšana
		//saskaitīšanai ir prioritāte ==> tā tiek izpildīta pirmā, tad rezultāts tiek ievietots mainīgajā (i)

while(i<=N)
  {
  i = i + 1;	//obligāti jāmaina i vērtība
  printf("(%d.)	 i mainīgā nākamā vētība ir %d	 (un tā ir mazāka par %d)",i,i,N);
  if(i == X)
   {
   printf("	x vērtība ir sasniegta");
   }
  printf("\n");
  }

printf("(%d.)	 i mainīgā nākamā vētība ir kļuvusi lielāka par %d\n",i,N);
printf("skaitīšanu apturam\n");

return 0;
}
