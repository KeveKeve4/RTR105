# 1. Laboratorijas Darbs - Teilora rinda

funkcija: cos^2(x)

Izmantojot rekurences reizinātāju ir iespējams noteikt savas funkcijas n-tā locekļa vērtību un ipeirkšējo locekļu summu

Links uz funkcijas cos^2(x) [grafiku](https://github.com/KeveKeve4/RTR105/blob/main/Laboratorijas%20Darbi/LD_1/cos2(x)%20grafiks.png)

Programmas kods:

```
#include<stdio.h>
#include<math.h>
double mycos (double x)
{
    double a,S;
    int k=0;

    a = pow(-1,k)*pow(x,4*k)/(1.);
    S = a;

    while (k<500)
    {
        k++;
        a = a * (-1) *x*x*x*x / ((2*k)*((2*k)-1));
        S = S + a;
        if(k==1)
        {printf("a0   = %8.2f S0   = %8.2f\n",a,S);}
        if(k==499)
        {printf("a499 = %8.2f S499 = %8.2f\n",a,S);}
        if(k==500)
        {printf("a500 = %8.2f S500 = %8.2f\n",a,S);}
    }
    return S;
}
void main()
{
    double x,y,yy;
    printf("cos2 aprekinasana:\n");
    printf("Ievadi argumentu x: ");
    scanf("%lf",&x);
    y = cos(x*x);
    
    printf("cos2(%.2f)=%.2f\n\n",x,y);

    yy = mycos(x);

    printf("Cos2(%.2f) caur summu: %.2f\n\n",x,yy);
    printf("            500                           \n");
    printf("           _____                          \n");
    printf("           \\            k   4k           \n");
    printf("            \\       (-1) * x             \n");
    printf("cos2(%4.2f) = > _________________          \n",x);
    printf("            /                             \n");
    printf("           /____      (2 * k)!            \n");
    printf("            k=0                           \n\n");
    printf("                                           4            \n");
    printf("                                   (-1) * x             \n");
    printf("rekurences reizinātājs:  ____________________________   \n\n");
    printf("                           (2 * k) * ((2 * k) - 1)      \n");
}
```
