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
        if(k=1)
        {printf("a0   = %8.2f S0   = %8.2f\n",a,S);}
        if(k=499)
        {printf("a499 = %8.2f S499 = %8.2f\n",a,S);}
        if(k=500)
        {printf("a500 = %8.2f S500 = %8.2f\n",a,S);}
    }
    return S;
}
void main()
{
    double x,y,yy;
    printf("Cos2 aprekinasana:\n");
    printf("Ievadi argumentu x:");
    scanf("%lf",&x);
    y = cos(x*x);
    yy = mycos(x);
    printf("Cos2(%.2f)=%.2f\n",x,y);
    printf("mycos=%.2f\n",yy);
}