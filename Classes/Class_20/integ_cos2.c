#undef __STRICT_ANSI__

#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,eps = 1.e-3,h,integr1 = 0.,integr2;
    int k,n = 2;

    printf("Ievadiet pirmo robežu: ");
    scanf("%f", &a);

    printf("Ievadiet otro robežu: ");
    scanf("%f", &b);

    integr2 = (b-a) * (cos(a)*cos(a)) + (cos(b)*cos(b)) / n;//(b-a)/2.*sin(a)+(b-a)/2.*sin(b);
    while(fabs (integr2 - integr1) > eps)
    {
        n *= 2;
        h = (b - a) /n;
        integr1 = integr2;
        integr2 = 0.;
        for(k = 0;k < n;k++)
        integr2 += (h * (cos(a + (k + 0.5)))*(cos(a + (k + 0.5)))) * h;
    }
printf("Integrāļa vērtība:%.2f\n",integr2);

return 0;
}