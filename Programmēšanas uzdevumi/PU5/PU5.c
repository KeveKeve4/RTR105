#include <stdio.h>

long long faktorial(int num, int mode) 
{
    long long fak = 1;
    int i;

    for (i = num; i > 1; i--) 
    {
        if (mode == 1 && fak > 255) 
        {
            printf("Kluda: char tipa datu parplude.\n");
            return -1;
        } 
        else if (mode == 2 && fak > 2147483647) 
        {
            printf("Kluda: int tipa datu parplude.\n");
            return -1;
        } 
        else if (mode == 3 && fak > 9223372036854775807) 
        {
            printf("Kluda: long long tipa datu parplude.\n");
            return -1;
        }

        fak *= i;
    }
    return fak;
}

int main() {
    int num, mode;

    printf("Ievadiet ciparu: ");
    scanf("%d", &num);

    printf("Izvelaties datu tipu (char = 1, int  = 2 , long long = 3): ");
    scanf("%d", &mode);

    long long fak = faktorial(num, mode);

    if (fak != -1) {printf("%d faktorialais ir: %lld\n", num, fak);} 

    else {printf("kluda aprekinot faktorialu\n");}

    return 0;
}