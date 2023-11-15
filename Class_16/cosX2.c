#include<stdio.h>
#include<math.h>
double mycos (double x)
{
    double a,S;
    int k=0;

    a = pow(-1,k)*pow(x,4*k)/(1.);
    S = a;
    printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

    while (k<100)
    {
        k++;
        a = a * (-1) *x*x*x*x / ((2*k)*((2*k)-1));
        S = S + a;
        printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    }
    return S;
}
void main()
{
 double x=1.69,y,yy;
 y = cos(x*x);
 printf("standarta funkcija cos - y=cos(%.2f)=%.2f\n",x,y);

 yy = mycos(x);
 printf("lictotaaja funkcija - y=mycos(%.2f)=%.2f\n",x,yy);
}
void main()
{
    printf("Cos2 aprekinasana\n:");
    printf("Ievadi argumentu x:");
    scanf("%d",x);
    y = cos(x*x);
    printf("\nsin(%.2f)=%.2f",x,y);
}