#include <stdio.h>

int main() 
{
    char b1, b2, b3;

    printf("Ievadi pirmo burtu: ");
    scanf(" %c", &b1);

    printf("Ievadi otro burtu: ");
    scanf(" %c", &b2);

    printf("Ievadi treso burtu: ");
    scanf(" %c", &b3);

    printf("\nIevadiet 'A' prieks augosas secibas, 'D' prieks dilstosas secibas: ");
    char seciba;
    scanf(" %c", &seciba);

    if (seciba == 'A' || seciba == 'a') 
    {
        if (b1 <= b2 && b1 <= b3) 
        {
            printf("%c", b1);
            if (b2 <= b3) {printf("%c%c\n", b2, b3);} 
            else {printf("%c%c\n", b3, b2);}
        } 

        else if (b2 <= b1 && b2 <= b3) 
        {
            printf("%c", b2);
            if (b1 <= b3) {printf("%c%c\n", b1, b3);} 
            else {printf("%c%c\n", b3, b1);}
        } 

        else 
        {
            printf("%c", b3);
            if (b1 <= b2) {printf("%c%c\n", b1, b2);} 
            else {printf("%c%c\n", b2, b1);}
        }
    } 
    else if (seciba == 'D' || seciba == 'd') 
    {
        if (b1 >= b2 && b1 >= b3) 
        {
            printf("%c", b1);
            if (b2 >= b3) {printf("%c%c\n", b2, b3);} 
            else {printf("%c%c\n", b3, b2);}
        } 
        else if (b2 >= b1 && b2 >= b3) 
        {
            printf("%c", b2);
            if (b1 >= b3) {printf("%c%c\n", b1, b3);} 
            else {printf("%c%c\n", b3, b1);}
        } 
        else 
        {
            printf("%c", b3);
            if (b1 >= b2) {printf("%c%c\n", b1, b2);} 
            else {printf("%c%c\n", b2, b1);}
        }
    } 
    else {printf("Nepareizi ievadits, ludzu ievadiet 'A' vai 'D'\n");}
    return 0;
}
