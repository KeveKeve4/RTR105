#include<stdio.h>
#include<math.h>
void main () 
{
double x=1.69,y,a0,a1,a2,a3,a4,S;
int k=0;
y = cos (x*x) ;
printf("y=cos(%.2f)=%.2f\n",x,y);

a0 = pow(-1,k)*pow(x,4*k)/(1.);
k++;
S = a0;
printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S);

a1 = pow(-1,k)*pow(x,4*k)/(1.*1*2);
k++;
S = S + a1;
printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S);

a2 = pow(-1,k)*pow(x,4*k)/(1.*1*2*3*4);
k++;
S = S + a2 ;
printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S);

a3 = pow(-1,k)*pow(x,4*k)/(1.*1*2*3*4*5*6);
k++;
S = S + a3;
printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S);

a4 = pow(-1,k)*pow(x,4*k)/(1.*1*2*3*4*5*6*7*8);
k++;
S = S + a4;
printf("%.2f\t%8.2f\t%8.2f\n",x,a4,S);


return 0;
}