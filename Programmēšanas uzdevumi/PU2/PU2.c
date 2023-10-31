#include<stdio.h>

int main() 
{
unsigned char num1;

printf("Ievadiet naturālu skaitli: ");
scanf("%hhu", &num1);

printf("Skaitlis %hhu uzrakstīts bināri ir: ", num1 );
for (int i = 7; i >= 0; i--) 
	{
		if ((num1 >> i) & 1)
		{
		printf("1");
		}

		else
		{
        printf("0");
		}
	}

printf("\n");
return 0;
}
