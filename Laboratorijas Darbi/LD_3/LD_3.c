#include<stdio.h>
#include<math.h>
int main()
{

float a,b,x,delta_x;
double y,y1,y2,y2_1,y3,y3_1;

FILE*deriv;

deriv = fopen("atvas.dat", "w");
	
printf("lūdzu izvēlieties funkcijas sākuma robežas vērtību a:\n");
scanf("%f", &a);
	
printf("lūdzu izvēlieties funkcijas beigu robežas vērtību b:\n");
scanf("%f", &b);
	
printf("lūdzu izvēlieties funkcijas precizitātes vērtību dx:\n");
scanf("%f", &delta_x);

fprintf(deriv,"\tx\t\tf(x)\tf\'(x) analyt.\tf\'(x) finite\tf\'\'(x) analyt.\tf\'\'(x) finite\n");
printf("\tx\t\tf(x)\tf\'(x) analyt.\tf\'(x) finite\tf\'\'(x) analyt.\tf\'\'(x) finite\n");
x=a;
while(x<b)
  {
	y=cos(x)*cos(x);
  y1=cos(x+delta_x)*cos(x+delta_x);
  
	y2_1=-2*cos(x)*sin(x);
  y2=(y1-y)/delta_x;
  
  y3_1=2*pow(sin(x),2)-2*pow(cos(x),2);
  y3=(cos(x+delta_x)*cos(x+delta_x)-2*cos(x)*cos(x)+cos(x-delta_x)*cos(x-delta_x))/pow(delta_x,2);
  
	printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,y,y2,y2_1,y3,y3_1);
  fprintf(deriv,"%10.2f\t%10.2f\t%10.2f\t\%10.2f\t%10.2f\t%10.2f\n",x,y,y2,y2_1,y3,y3_1);
  x+=delta_x;
  }
fclose(deriv);
}
