#include <stdio.h>

int main(void)
{
	int count = 0;
	int count2 = 0;
	int i = 0;

	char teik[100];
	printf("Ievadiet teikumu(teikuma galā jābūt atstarpe): ");
	fgets(teik, sizeof(teik), stdin);
	while(i<=99)
	{

		if(*(teik+i) != ' ')

		{
		count++;
		}

		else

		{
			printf("vārda garums: %d\n", count);
			if(count >= 5)
			{
				count2++;
			}
			count = 0;
		}
		if(*(teik+i) == '\0')
		{
			count=count-2;
			printf("vārda garums: %d\n", count);
			if(count <= 5)
			{
				count2++;
			}
			break;
		}
		i++;
	}
	printf("teikumā ir %d vārdi kuriem ir 5 vai vairāk burti\n", count2);
    return 0;
}
