#include <stdio.h>
#include "PU6_1.c"
#include "PU6_2.c"
#include "PU6_3.c"
#include "PU6_4.c"

int main() 
{
    mod1();

    int i = 2;
    mod2(i);

    int num1 = mod3();
    int sum = mod4(num1);

    printf("Abu ciparu summa ir %d\n", sum);

    return 0;
}