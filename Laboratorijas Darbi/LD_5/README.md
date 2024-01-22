# 5. Laboratorijas Darbs - bubble sort

Sajā darbā ir nepieciešams sakārtot burtus pēc ASCCI tabulas
kā arī jānosaka burtu rindas:
 - vidējo aritmētisko
 - modu
 - mediānu
 - max un min vētības
 - izvadīt datus augošā secībā
```
#include<stdio.h> 
#include<string.h>

int main()
{ 
	char input[256]; 
	int x, y, tmp, length, min=256, max=0, vid_v, vertiba, kop_s=0;
    
	printf("Lūdzu ievadiet simbolu rindu (ne vairāk kā 256 rakstzīmēm!):\n"); 
	scanf("%[^\n]", input);

	length = strlen(input); 
	printf("Ievadīto simbolu skaits ir %d.\n\n", length);


    	for (y = 0; y < length; y++)
    	{
        	for (x = 0; x < length - 1; x++)
		{
            		if (input[x] > input[x + 1])
            		{
                		tmp = input[x + 1]; 
                		input[x + 1] = input[x]; 
                		input[x] = tmp;
            		}
        	}
    	}
	
	int count[256] = {0};
	
    	for (x = 0; x < length; x++)
    	{
        	vertiba = (int)input[x];
        	count[vertiba]++;
        	kop_s += vertiba;

        	if (max < vertiba) max = vertiba;
        	if (min > vertiba && vertiba > 32) min = vertiba;
    	}

    	int maxCount = 0, maxCountIndex;

    	for (x = 0; x < 256; x++)
    	{
        	if (count[x] > maxCount)
        	{
            		maxCount = count[x];
            		maxCountIndex = x;
        	}
    	}

    	printf("Mazākā vērtība ir %d (pēc ASCII), simbols %c;\n\n", min, min);
    	printf("Lielākā vērtība ir %d (pēc ASCII), simbols %c;\n\n", max, max);
    	printf("Vidējā vērtība ir %d (pēc ASCII), simbols %c;\n\n", kop_s / length, kop_s / length);
    	printf("Ievadītā rindas mediāna ir %d (pēc ASCII), simbols %c;\n\n", input[length / 2], input[length / 2]);
    	printf("Biežāk sastopamais simbols ir %d (pēc ASCII), simbols %c ar %d sastopamajiem.\n\n", (char)maxCountIndex, (char)maxCountIndex, maxCount);

    	for (x = 0; x < length; x++)
    	{
        	printf("%d \t %c \t %d \n", x, input[x], input[x]);
    	}
	return 0;
}
```
