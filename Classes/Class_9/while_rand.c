#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

int flag = 1;
long long int counter = 0;
long long int counter2 = 0;
int grauds;

grauds = time(NULL);
srand(grauds);

for(int i=0;1<10;i++)
	{
	counter = 0;
	flag = rand();
	while( flag )
		{
		counter++;
		flag = rand();
		}

	counter2 = counter2 +counter;
	printf(" kopējie cikli = 	%d\n cikli = %d	\n cilpa = 	%d\n",counter,counter2,i);	
	}

return 0;
}
