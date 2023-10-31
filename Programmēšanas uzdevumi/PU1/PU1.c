#include<stdio.h>

int main() 
{
	int long long num1, num2, sum;

    printf("Ierakstiet 400 000: ");
    scanf("%lld", &num1);
    printf("Ieraksiet 100 000: ");
    scanf("%lld", &num2);

    sum = num1 * num2;
    
	if(sum == 40000000000) 
	{    
    printf("Iznākums: %lld\n", sum);
	}
    else 
	{ 
    printf("Ievadītas citas vērtības: %lld\n", sum);
	}
return 0;
}
